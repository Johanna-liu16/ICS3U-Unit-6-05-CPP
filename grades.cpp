// Copyright Johanna Liu 2022
//
// Created by Johanna Liu
// Created in Dec 2022
// This program calculates the average

#include <iostream>
#include <list>
#include <string>
#include <cmath>  // for rounding numbers


float averageMark(std::list<float> marks) {
    // This function finds the average

    float average;
    int mark;
    float total = 0;

    for (int mark : marks) {
        total += mark;
    }
    average = round(total / marks.size() * 100) / 100;

    return average;
}

int main() {
    // This function makes the list

    float average;
    float tempInt;
    std::list<float> marks;
    std::string tempNumber = "";
    std::list<std::string> reversedWords;

    std::cout << "Please enter 1 mark at a time. Enter -1 to end." << std::endl;
    std::cout << "" << std::endl;

    while (tempNumber != "-1") {
        try {
            std::cout << "What is your mark (1 - 100): ";
            std::cin >> tempNumber;
            tempInt = stof(tempNumber);
            if (tempInt <= 100 & tempInt >= 0) {
                marks.push_back(tempInt);
            } else if (tempInt == -1) {
                average = averageMark(marks);
                std::cout << "\nThe average is " << average << "%" << std::endl;
                break;
            }
        } catch (std::invalid_argument) {
            std::cout << "Invalid input." << std::endl;
            continue;
        }
    }
    std::cout << "\nDone." << std::endl;
}
