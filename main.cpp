/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: 

Here, briefly, at least in one or a few sentences
describe what the program does.
*/

#include <iostream>
#include <string>
#include <fstream> 
#include <cstdlib> 
#include <climits>
#include "reservoir.h"

int main() {
    std::cout << "Task A:\n";
    std::cout << "The east storage on 01/05/2018 is: " << get_east_storage("01/05/2018") << " billion gallons." << std::endl;
    std::cout << "The east storage on 02/12/2018 is: " << get_east_storage("02/12/2018") << " billion gallons." << std::endl;
    std::cout << "The east storage on 09/24/2018 is: " << get_east_storage("09/24/2018") << " billion gallons." << std::endl;

    std::cout << "\nTask B:\n";
    std::cout << "The maximum storage in the East is: " << get_max_east() << " billion gallons." << std::endl;
    std::cout << "The minimum storage in the East is: " << get_min_east() << " billion gallons." << std::endl;
  
return 0;
}
