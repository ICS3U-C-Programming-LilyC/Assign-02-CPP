// Copyright (c) 2023 Lily Carroll All rights reserved.
//
// Created by: Lily Carroll
// Created on: Oct/14/2023
// This program calculates the volume
// and the surface area of a right cylinder
// with user input.
#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    // Declaring constants.
    // Using std::string to allow for
    // the assignment of a string to my constants.
    const std::string UNIT_CENTIMETERS = "cm";
    const std::string UNIT_MILLIMETERS = "mm";
    const std::string UNIT_METERS = "m";

    // Explaining my program to the user.
    std::cout <<
    "This program calculates the surface area and volume of a right cylinder."
    << std::endl;

    // Telling the user the 3 options
    // of units they can choose from for their calculation.
    std::cout << "The units of calculation that you may choose from are: "
              << std::endl;
    std::cout << "1 - Centimeters" << std::endl;
    std::cout << "2 - Millimeters" << std::endl;
    std::cout << "3 - Meters" << std::endl;

    // Declaring my variable for the user's choice of unit.
    int unitChoice;

    // Getting the user input for the units.
    std::cout << "Please enter the unit of measurement: ";
    std::cin >> unitChoice;

    // Declaring my variable for the units,
    // which will be assigned to the user's unit choice.
    std::string unit;

    // Declaring my variable for the radius.
    float radius;

    // Declaring my variable for the height.
    float height;

    // Using if then, else if and else
    // to allow the user to choose from the unit options.
    if (unitChoice == 1) {
        unit = UNIT_CENTIMETERS;
    } else if (unitChoice == 2) {
        unit = UNIT_MILLIMETERS;
    } else if (unitChoice == 3) {
        unit = UNIT_METERS;
    } else {
        std::cout << "Invalid unit. Please select one from the options above."
        << std::endl;
        // Using return 0 to end the program, due to the error.
        return 0;
    }

    // Calculating the surface area and volume.

    // Getting the radius from the user.
    std::cout << "Please enter the radius: ";
    std::cin >> radius;

    // Getting the height from the user.
    std::cout <<
    "Please enter the height: ";
    std::cin >> height;

    // Declaring the variable for volume
    // and surface area and completing the calculations.
    float volume = M_PI * pow(radius, 2)
    * height;
    float surfaceArea = (2 * M_PI * radius * height)
    + (2 * M_PI * pow(radius, 2));

    // Using if and else if statements for
    // error checking of invalid input of the radius and height.
    if (radius == 0 || height == 0) {
        std::cout << "Please enter a valid number."
        << std::endl;
        return 0;
    } else if (radius < 0 || height < 0) {
        std::cout << "Please enter a valid number."
        << std::endl;
        return 0;
    }
    // Displaying the volume and surface area of the cylinder.
    std::cout << "The volume of the cylinder is "
    << std::fixed << std::setprecision(2)
    << volume << " " << unit << " ^3" << std::endl;
    std::cout << "The surface area of the cylinder is "
    << std::fixed << std::setprecision(2) << surfaceArea
    << " " << unit << " ^2" << std::endl;
}
