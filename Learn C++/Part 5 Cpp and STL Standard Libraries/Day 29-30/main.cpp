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
#include <algorithm>

int main() {
    // Tạo một vector chứa các số nguyên
    std::vector<int> numbers = {5, 2, 8, 1, 9, 3};

    // Sắp xếp vector sử dụng algorithm sort()
    std::sort(numbers.begin(), numbers.end());

    std::cout << "Sorted numbers: ";
    // Duyệt vector sử dụng iterator và in ra các phần tử
    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Tìm kiếm một giá trị sử dụng algorithm find()
    int value_to_find = 8;
    std::vector<int>::iterator found_it = std::find(numbers.begin(), numbers.end(), value_to_find);
    if (found_it != numbers.end()) {
        std::cout << "Found " << value_to_find << " at index " << std::distance(numbers.begin(), found_it) << std::endl;
    } else {
        std::cout << "Value " << value_to_find << " not found in the vector." << std::endl;
    }

    return 0;
}