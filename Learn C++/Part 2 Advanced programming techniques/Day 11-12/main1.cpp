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

bool isPalindrome(std::string s)
{
    int left = 0, right = s.length() - 1;
    while (left < right)
    {
        if (s[left] != s[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main()
{
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if (isPalindrome(input))
    {
        std::cout << "The string is a palindrome." << std::endl;
    }
    else
    {
        std::cout << "The string is not a palindrome." << std::endl;
    }

    return 0;
}