/*
 * Filename: main.cpp
 * Description: 
 * Author: le Tan-Dat
 * Created: 2024-06-05
 * Copyright:
 * License: MIT License
 */

#include <iostream>
#include <memory>

class MyClass {
public:
    MyClass() { std::cout << "MyClass object created." << std::endl; }
    ~MyClass() { std::cout << "MyClass object destroyed." << std::endl; }
    void doSomething() { std::cout << "Doing something..." << std::endl; }
};

int main() {
    // Sử dụng unique_ptr
    std::unique_ptr<MyClass> uniquePtr(new MyClass());
    uniquePtr->doSomething();

    // Sử dụng shared_ptr
    std::shared_ptr<MyClass> sharedPtr1(new MyClass());
    std::shared_ptr<MyClass> sharedPtr2 = sharedPtr1;
    sharedPtr1->doSomething();
    sharedPtr2->doSomething();

    // Sử dụng weak_ptr
    std::weak_ptr<MyClass> weakPtr = sharedPtr1;
    if (std::shared_ptr<MyClass> spTemp = weakPtr.lock()) {
        spTemp->doSomething();
    } else {
        std::cout << "The object has been destroyed." << std::endl;
    }

    return 0;
}