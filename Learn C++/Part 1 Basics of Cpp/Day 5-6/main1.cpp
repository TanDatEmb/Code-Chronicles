/*
 * Filename: main.cpp
 * Description: 
 * Author: le Tan-Dat
 * Created: 2024-06-05
 * Copyright:
 * License: MIT License
 */

#include <iostream>

int main()
{
    int n, total = 0;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    for (int i = 1; i <= n; i++)
    {
        total += i;
    }
    std::cout << "The sum of all numbers from 1 to " << n << " is: " << total << std::endl;
    return 0;
}