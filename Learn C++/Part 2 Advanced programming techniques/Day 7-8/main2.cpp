/*
 * Filename: main.cpp
 * Description:
 * Author: le Tan-Dat
 * Created: 2024-06-05
 * Copyright:
 * License: MIT License
 */

#include <iostream>

int fibonacci(int n)
{
    if (n <= 1)
        return n;
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}

int main()
{
    int n;
    std::cout << "Enter the number of Fibonacci terms to generate: ";
    std::cin >> n;
    std::cout << "The first " << n << " Fibonacci numbers are: ";
    for (int i = 0; i < n; i++)
    {
        std::cout << fibonacci(i) << " ";
    }
    std::cout << std::endl;
    return 0;
}