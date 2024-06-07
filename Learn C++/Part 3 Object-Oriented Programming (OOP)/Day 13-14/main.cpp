/*
 * Filename: main.cpp
 * Description:
 * Author: le Tan-Dat
 * Created: 2024-06-05
 * Copyright:
 * License: MIT License
 */

#include <iostream>
class Student
{
private:
    std::string name;
    int age;
    std::string major;
    float gpa;

public:
    // Constructor
    Student(std::string n, int a, std::string m, float g)
    {
        name = n;
        age = a;
        major = m;
        gpa = g;
    }

    // Getter and Setter methods
    std::string getName()
    {
        return name;
    }

    void setName(std::string n)
    {
        name = n;
    }

    int getAge()
    {
        return age;
    }

    void setAge(int a)
    {
        age = a;
    }

    std::string getMajor()
    {
        return major;
    }

    void setMajor(std::string m)
    {
        major = m;
    }

    float getGPA()
    {
        return gpa;
    }

    void setGPA(float g)
    {
        gpa = g;
    }

    // Other methods
    void printStudentInfo()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Major: " << major << std::endl;
        std::cout << "GPA: " << gpa << std::endl;
    }
};
int main()
{
    // Write your code here
    Student student1("John Doe", 27, "Computer Science", 4.5);
    student1.printStudentInfo();
    student1.setGPA(3.5);
    student1.printStudentInfo();
    return 0;
}