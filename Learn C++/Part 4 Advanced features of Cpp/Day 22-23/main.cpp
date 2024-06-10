/*
 * Filename: main.cpp
 * Description: 
 * Author: le Tan-Dat
 * Created: 2024-06-05
 * Copyright:
 * License: MIT License
 */


#include <iostream>
#include <exception>
#include <stdexcept>

class DivideByZeroException : public std::domain_error {
public:
    DivideByZeroException() : std::domain_error("Error: Division by zero") {}
};

class NegativeArgumentException : public std::invalid_argument {
public:
    NegativeArgumentException(const std::string& message) 
        : std::invalid_argument(message) {}
};

int divide(int a, int b) {
    if (b == 0) {
        throw DivideByZeroException();
    }
    if (a < 0 || b < 0) {
        throw NegativeArgumentException("Error: Arguments must be non-negative");
    }
    return a / b;
}

int main() {
    try {
        int result = divide(10,-10);
        std::cout << "Result: " << result << std::endl;
    } catch (const DivideByZeroException& e) {
        std::cerr << e.what() << std::endl;
    } catch (const NegativeArgumentException& e) {
        std::cerr << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "General exception: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Unknown exception occurred" << std::endl;
    }
    return 0;
}