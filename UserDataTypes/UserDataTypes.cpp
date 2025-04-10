// UserDataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Declarations.h"
#include <iostream>

//typedef double salary;    -- Traditional C++ way

using salary = double;      // Modern C++ way

int main()
{

    salary wage_reception = 14.4;
    salary wage_analyst = 18.5;
    salary wage_engineer = 32.4;


    std::cout << "User Data Types\n";

    Sandwich pastrami;
    pastrami.meat = Pastrami;
    pastrami.heatSandwich();
    //pastrami.isHot = true;
    pastrami.weigth = 1.0f;

    std::cout << "Size of Sandwich: " << sizeof(pastrami) << std::endl;
    std::cout << "Size of string: " << sizeof(std::string) << std::endl;
    std::cout << "Size of float: " << sizeof(float) << std::endl;
    std::cout << "Size of boolean: " << sizeof(bool) << std::endl;  // efficient memory access > padding > bool to 4 bytes

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
