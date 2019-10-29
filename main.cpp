// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Amir Mersad
// Created on October 2019
// This program gives you the number of the day in the week

#include "iostream"


int main() {
    // This function gives you the number of the day in the week
    int number;
    std::string number_str;


    // Input
    std::cout << "enter the number of the day: " << std::endl;
    std::cin >> number_str;

    // Process and output
    try {
        number = std::stoi(number_str);
        if (number == 1) {
            std::cout << "Monday" << std::endl;
        } else if (number == 2) {
            std::cout << "Tuesday" << std::endl;
        } else if (number == 3) {
            std::cout << "Wednesday" << std::endl;
        } else if (number == 4) {
            std::cout << "Thursday" << std::endl;
        } else if (number == 5) {
            std::cout << "Friday" << std::endl;
        } else if (number == 6) {
            std::cout << "Saturday" << std::endl;
        } else if (number == 7) {
            std::cout << "Sunday" << std::endl;
        } else {
            std::cout << "Please enter a number between 1 and 7!" << std::endl;
            }
    } catch(std::invalid_argument) {
        std::cout << "Wrong input!!!" << std::endl;
    }
}
