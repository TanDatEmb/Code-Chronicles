/*
 * Filename: main.cpp
 * Description: 
 * Author: le Tan-Dat
 * Created: 2024-06-05
 * Copyright:
 * License: MIT License
 */
#include<iostream>
#include <memory>

class Person {
public:
    Person(std::string name) : name(name) {
        std::cout << "Person " << name << " created." << std::endl;
    }

    ~Person() {
        std::cout << "Person " << name << " destroyed." << std::endl;
    }

    std::string getName() const {
        return name;
    }

private:
    std::string name;
};

void usingUniquePtr() {
    std::cout << "Using unique_ptr:" << std::endl;
    std::unique_ptr<Person> person1(new Person("Alice"));
    // person1 now owns the Person object

    // person1 will automatically delete the Person object when it goes out of scope
}
void usingSharedPtr() {
    std::cout << "Using shared_ptr:" << std::endl;
    std::shared_ptr<Person> person2(new Person("Bob"));
    std::shared_ptr<Person> person3 = person2;
    // person2 and person3 now both own the Person object
    
    // The Person object will be deleted when both person2 and person3 are destroyed
}
void usingWeakPtr() {
    std::cout << "Using weak_ptr:" << std::endl;
    std::shared_ptr<Person> person4(new Person("Charlie"));
    std::weak_ptr<Person> weakPerson = person4;
    // weakPerson does not own the Person object, it only observes it

    // person4 will be deleted when it goes out of scope, and weakPerson will detect this
    // (You need to lock weakPerson to get a shared_ptr before accessing the object)
}