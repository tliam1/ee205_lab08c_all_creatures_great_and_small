///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab08c_all_creatures_great_and_small - EE 205 - Spr 2022
///
/// @file main.cpp
/// @version 1.0
///
/// @author Liam Tapper <@tliam@hawaii.edu>
/// @date   08_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "Animal.h"
int main() {
    Animal myFirstAnimal = Animal( "Felis catus" ); //this is the constructor doing its' thing
    myFirstAnimal.setGender( MALE );
    myFirstAnimal.setWeight( 19 ); //  Refactor to include Unit of Measure
    myFirstAnimal.printInfo();
    return 0;
}
