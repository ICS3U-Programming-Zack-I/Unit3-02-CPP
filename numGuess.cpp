// Copyright (c) 2021 Zack Isingoma
//
// Created by: Zack Isingoma
// Created on: Dec, 09 2021.
// This program makes users guess numbers.

#include <iostream>

int main() {
    const int FAVORITE_NUMBER = 7;
    int number;
    std::cout << "Guess A number between 1 and 9: ";
    std::cin >> number;
    std::cout << "" << std::endl;
    if (number != FAVORITE_NUMBER) {
        std::cout << "NIce try";
    }
    if (number == FAVORITE_NUMBER) {
        std :: cout << " Well Done";
    }
}
