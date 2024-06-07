/*
 * Filename: main.cpp
 * Description:
 * Author: le Tan-Dat
 * Created: 2024-06-05
 * Copyright:
 * License: MIT License
 */

#include <iostream>
using namespace std;

// Lớp cơ sở
class Animal
{
protected:
    string name;

public:
    Animal(string n) : name(n) {}

    void eat()
    {
        cout << name << " is eating." << endl;
    }

    void sleep()
    {
        cout << name << " is sleeping." << endl;
    }
};

// Lớp dẫn xuất từ Animal với phương thức kế thừa công khai
class Dog : public Animal
{
public:
    Dog(string n) : Animal(n) {}

    void bark()
    {
        cout << name << " is barking." << endl;
    }
};

// Lớp dẫn xuất từ Animal với phương thức kế thừa bảo vệ
class Cat : protected Animal
{
public:
    Cat(string n) : Animal(n) {}

    void meow()
    {
        cout << name << " is meowing." << endl;
        sleep(); 
    }

    void showName()
    {
        cout << "The cat's name is: " << name << endl;
    }
};

// Lớp dẫn xuất từ Animal với phương thức kế thừa riêng tư
class Bird : private Animal
{
public:
    Bird(string n) : Animal(n) {}

    void chirp()
    {
        cout << name << " is chirping." << endl;
    }

    void display()
    {
        eat();
        sleep();
    }
};

int main()
{
    Dog dog("Buddy");
    dog.eat();
    dog.sleep();
    dog.bark();

    Cat cat("Whiskers");
    cat.meow();
    cat.showName();
    // cat.sleep();

    Bird bird("Tweety");
    bird.chirp();
    bird.display();

    return 0;
}
