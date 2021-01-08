// Copyright (c) 2021 Ryan Walsh All rights reserved
//
// Created by Ryan Walsh
// Created on January 4 2021
// this program calculates the volume of a cylinder

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

float calculate_volume(float radius, float height) {
    // calculates volume
    float volume_of_cylinder;

    // process & output
    volume_of_cylinder = M_PI * (pow(radius, 2)) * (height);

    return volume_of_cylinder;
}

int main() {
// this program calculates the volume of a cylinder
    float radius_from_user;
    float height_from_user;
    float volume;
    std::string radius_from_user_string;
    std::string height_from_user_string;

    while (true) {
        try {
            std::cout << "Enter the radius of the cylinder (mm): ";
            std::cin >> radius_from_user_string;
            radius_from_user = std::stof(radius_from_user_string);
            std::cout << "Enter the height of the cylinder (mm): ";
            std::cin >> height_from_user_string;
            std::cout << "" << std::endl;
            height_from_user = std::stof(height_from_user_string);
            if (radius_from_user < 0 || height_from_user < 0) {
                std::cout << "Please ensure all values are positive"
                          << std::endl;
                std::cout << "" << std::endl;
            } else {
                break;
            }
        }catch (std::invalid_argument) {
            std::cout << "Please enter a valid number." << std::endl;
            std::cout << "" << std::endl;
        }
    }

    // call functions
    volume = calculate_volume(radius_from_user, height_from_user);

    std::cout << std::setprecision(2) << std::fixed <<
    "The volume of a cylinder with radius " << radius_from_user <<
    "mm and height " << height_from_user << "mm is " << std::setprecision(2)
    << std::fixed << volume << "mm³" << std::endl;
}
