/*
 * Filename: main.cpp
 * Description: 
 * Author: le Tan-Dat
 * Created: 2024-06-05
 * Copyright:
 * License: MIT License
 */

#include <iostream>

template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // Write your code here
    int result1 = max<int>(5, 10);
    double result2 = max<double>(3.14, 2.71);
    return 0;
}