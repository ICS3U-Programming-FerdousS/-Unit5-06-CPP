// Copyright (c) 2021 Ferdous Sediqi All rights reserved.
// Created by: Ferdous Sediqi
// Created on: May. 16, 2022
// This program asks the user for a number with decimal
// then we calculate and round number to the nearest decimal
// places of user choice. 


#include <iostream>
// import decimal
// #include <iomanip>
// import string
#include <string>
// import math
#include <cmath>

// defin function to calculate number to nearest decimal places
void RoundDecimal(float &decimalNum, int decimalPlaces) {
    decimalNum =  decimalNum * (pow(10, decimalPlaces));
    decimalNum = decimalNum + 0.5;
    decimalNum = int(decimalNum);
    decimalNum = decimalNum / (pow(10, decimalPlaces));
    std::cout <<"The number after rounding to decimal places is "
    << decimalNum << std::endl;
}

main() {
    // variables
    float userNumFloat;
    float userDecimalPlacesFloat;
    std::string userNumString;
    std::string userDecimalPlacesString;

    // cast inputs to float
    try {
    // user inputs
        std::cout << "Enter your number with decimals: ";
        std::cin >> userNumString;
        std::cout << "Enter your decimal places: ";
        std::cin >> userDecimalPlacesString;
        std::cout << std::endl;
        
        userNumFloat = std::stof(userNumString);
        userDecimalPlacesFloat = std::stoi(userDecimalPlacesString);

         // check if user input is 0 or
        if (userDecimalPlacesFloat < 0){
            std::cout <<"Decimal places cannot be less than 0." << std::endl;
    } else {
        // calling the function
         RoundDecimal(userNumFloat, userDecimalPlacesFloat);
    }
    }
    // Display invalid input
    catch (std::invalid_argument) {
        std::cout <<"Invalid input. Input was not a valid number" << std::endl;
  }
    
}
