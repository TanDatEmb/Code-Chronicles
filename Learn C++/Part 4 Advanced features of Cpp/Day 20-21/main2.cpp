/*
 * Filename: main.cpp
 * Description:
 * Author: le Tan-Dat
 * Created: 2024-06-05
 * Copyright:
 * License: MIT License
 */

#include <iostream>
#include <string>
#include <vector>

template <typename T>
class Stack
{
private:
    std::vector<T> elements;

public:
    void push(const T &element)
    {
        elements.push_back(element);
    }

    void pop()
    {
        elements.pop_back();
    }

    T top() const
    {
        return elements.back();
    }

    bool empty() const
    {
        return elements.empty();
    }
};

int main()
{
    // Tạo một stack chứa các số nguyên
    Stack<int> intStack;

    // Thêm các phần tử vào stack
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    // In ra các phần tử trong stack
    std::cout << "Integer stack: ";
    while (!intStack.empty())
    {
        std::cout << intStack.top() << " ";
        intStack.pop();
    }
    std::cout << std::endl;

    // Tạo một stack chứa các chuỗi
    Stack<std::string> stringStack;

    // Thêm các phần tử vào stack
    stringStack.push("Hello");
    stringStack.push("World");
    stringStack.push("C++");

    // In ra các phần tử trong stack
    std::cout << "String stack: ";
    while (!stringStack.empty())
    {
        std::cout << stringStack.top() << " ";
        stringStack.pop();
    }
    std::cout << std::endl;

    return 0;
}