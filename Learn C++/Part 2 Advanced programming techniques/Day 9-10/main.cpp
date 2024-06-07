/*
 * Filename: main.cpp
 * Description:
 * Author: le Tan-Dat
 * Created: 2024-06-05
 * Copyright:
 * License: MIT License
 */

#include <iostream>
#include <cstring>

struct Student
{
    char name[50];
    int age;
    float gpa;
};

int main()
{
    const int MAX_STUDENTS = 100;
    Student *students = new Student[MAX_STUDENTS];
    int numStudents = 0;

    int choice;
    do
    {
        std::cout << "1. Add student\n";
        std::cout << "2. Display all students\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            if (numStudents < MAX_STUDENTS)
            {
                std::cout << "Enter student name: ";
                std::cin.ignore();
                std::cin.getline(students[numStudents].name, 50);
                std::cout << "Enter student age: ";
                std::cin >> students[numStudents].age;
                std::cout << "Enter student GPA: ";
                std::cin >> students[numStudents].gpa;
                numStudents++;
            }
            else
            {
                std::cout << "Maximum number of students reached.\n";
            }
            break;
        case 2:
            std::cout << "Student List:\n";
            for (int i = 0; i < numStudents; i++)
            {
                std::cout << "Name: " << students[i].name << ", Age: " << students[i].age << ", GPA: " << students[i].gpa << "\n";
            }
            break;
        case 3:
            std::cout << "Exiting...\n";
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 3);

    delete[] students;
    return 0;
}