/*
 * Filename: main.cpp
 * Description: 
 * Author: le Tan-Dat
 * Created: 2024-06-05
 * Copyright:
 * License: MIT License
 */

#include<iostream>
using namespace std;
class Shape {
public:
    virtual double getArea() = 0;
    virtual double getPerimeter() = 0;
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double getArea() override { return 3.14 * radius * radius; }
    double getPerimeter() override { return 2 * 3.14 * radius; }
};

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double getArea() override { return width * height; }
    double getPerimeter() override { return 2 * (width + height); }
};

int main() {
    Shape* s1 = new Circle(5.0);
    Shape* s2 = new Rectangle(4.0, 6.0);
    cout << "Circle area: " << s1->getArea() << endl;
    cout << "Rectangle area: " << s2->getArea() << endl;
    return 0;
}
