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
#include <cctype>
#include <unordered_map>

std::unordered_map<char, int> countCharacters(std::string s)
{
    std::unordered_map<char, int> charCount;
    for (char c : s)
    {
        if (isalnum(c))
        {
            charCount[tolower(c)]++;
        }
    }
    return charCount;
}

int main()
{
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::unordered_map<char, int> charCount = countCharacters(input);

    std::cout << "Character counts:" << std::endl;
    for (auto it : charCount)
    {
        std::cout << it.first << ": " << it.second << std::endl;
    }

    return 0;
}