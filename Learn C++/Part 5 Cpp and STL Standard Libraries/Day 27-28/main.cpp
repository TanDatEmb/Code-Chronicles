/*
 * Filename: main.cpp
 * Description: 
 * Author: le Tan-Dat
 * Created: 2024-06-05
 * Copyright:
 * License: MIT License
 */
#include <iostream>
#include <vector>
#include <map>
#include <string>

class Student {
public:
    int id;
    std::string name;
    double score;

    // Constructor mặc định
    Student() : id(0), name(""), score(0.0) {}

    // Constructor có tham số
    Student(int id, std::string name, double score)
        : id(id), name(name), score(score) {}
};

void addStudent(std::vector<Student>& students, int id, std::string name, double score) {
    students.push_back(Student(id, name, score));
}

void displayStudents(const std::vector<Student>& students) {
    for (const auto& student : students) {
        std::cout << "ID: " << student.id << ", Name: " << student.name << ", Score: " << student.score << "\n";
    }
}

void findStudentById(const std::map<int, Student>& studentMap, int id) {
    auto it = studentMap.find(id);
    if (it != studentMap.end()) {
        std::cout << "Found Student - ID: " << it->second.id << ", Name: " << it->second.name << ", Score: " << it->second.score << "\n";
    } else {
        std::cout << "Student with ID " << id << " not found.\n";
    }
}

int main() {
    std::vector<Student> students;
    std::map<int, Student> studentMap;

    addStudent(students, 1, "Alice", 85.5);
    addStudent(students, 2, "Bob", 90.0);
    addStudent(students, 3, "Charlie", 78.0);

    for (const auto& student : students) {
        studentMap[student.id] = student;
    }

    displayStudents(students);
    findStudentById(studentMap, 2);

    return 0;
}
