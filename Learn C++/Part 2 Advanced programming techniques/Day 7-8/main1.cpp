/*
 * Filename: main.cpp
 * Description:
 * Author: le Tan-Dat
 * Created: 2024-06-05
 * Copyright:
 * License: MIT License
 */

#include <iostream>

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int num;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> num;
    std::cout << "The factorial of " << num << " is " << factorial(num) << std::endl;
    return 0;
}