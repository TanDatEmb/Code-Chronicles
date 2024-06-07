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

int main() {
    // Get input from the user
    double num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Perform basic arithmetic operations
    double sum = num1 + num2;
    double difference = num1 - num2;
    double product = num1 * num2;
    double quotient = num1 / num2;

    // Display the results
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    cout << "The difference between " << num1 << " and " << num2 << " is: " << difference << endl;
    cout << "The product of " << num1 << " and " << num2 << " is: " << product << endl;
    cout << "The quotient of " << num1 << " and " << num2 << " is: " << quotient << endl;

    return 0;
}