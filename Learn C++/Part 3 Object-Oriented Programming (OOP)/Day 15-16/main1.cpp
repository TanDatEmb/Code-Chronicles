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

class Student
{
protected:
    std::string name;
    int age;
    std::string major;
    float gpa;

public:
    Student(std::string n, int a, std::string m, float g)
    {
        name = n;
        age = a;
        major = m;
        gpa = g;
    }

    std::string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    std::string getMajor()
    {
        return major;
    }

    float getGPA()
    {
        return gpa;
    }
};

class GraduateStudent : public Student
{
private:
    std::string researchArea;
    std::string supervisor;

public:
    GraduateStudent(std::string n, int a, std::string m, float g, std::string r, std::string s)
        : Student(n, a, m, g)
    {
        researchArea = r;
        supervisor = s;
    }

    std::string getResearchArea()
    {
        return researchArea;
    }

    std::string getSupervisor()
    {
        return supervisor;
    }

    void printGraduateStudentInfo()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Major: " << major << std::endl;
        std::cout << "GPA: " << gpa << std::endl;
        std::cout << "Research Area: " << researchArea << std::endl;
        std::cout << "Supervisor: " << supervisor << std::endl;
    }
};

int main()
{
    GraduateStudent gs("John Doe", 27, "Computer Science", 3.8, "Machine Learning", "Dr. Jane Smith");
    gs.printGraduateStudentInfo();
    return 0;
}