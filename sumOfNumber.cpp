// Copyright (c) 2022 Coffi All rights reserved.
// Created by: Marc Coffi
// Date: April, 2022
// Sum of numbers program

#include <iostream>

int main() {
  // declaring variables
  int counter = 0;
  int loop_sum = 0;
  std::string userNum;
  int userInt;
  // get the user number as a string
  std::cout << "Enter a postive number: ";
  std::cin >> userNum;
  std::cout << std::endl;

  try {
       userInt = std::stoi(userNum);
       if (userInt < 0) {
              // The user entered a negative number
              std::cout << "Invalid input.\n";
              std::exit(EXIT_FAILURE);
       }  // calculate the sum of all numbers from 0 to user number
       while (counter <= userInt) {
              loop_sum = loop_sum + counter;
              std::cout << "Tracking " << counter;
              std::cout << " times through the loop.\n";
              counter = counter + 1;
       }
       // display the sum to the user
       std::cout << "\nThe sum of the numbers from 0 to " << userNum << " is: ";
       std::cout << loop_sum << std::endl;
       } catch (std::invalid_argument) {
      // The user did not enter an integer.
      std::cout << "Invalid input.\n";
      std::exit(EXIT_FAILURE);
}
}
