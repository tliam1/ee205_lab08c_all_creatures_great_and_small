///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab08c_all_creatures_great_and_small - EE 205 - Spr 2022
///
/// @file Animal.h
/// @version 1.0
///
/// @author Liam Tapper <@tliam@hawaii.edu>
/// @date   08_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#ifndef EE205_LAB08C_ALL_CREATURES_GREAT_AND_SMALL_ANIMAL_H
#define EE205_LAB08C_ALL_CREATURES_GREAT_AND_SMALL_ANIMAL_H
#pragma once
#include <string>

typedef enum {UNKNOWN_GENDER, MALE, FEMALE} Gender;
const float UNKNOWN_WEIGHT = -1;

class Animal {
protected:
    static const std::string kingdom; //forced to animalia and errors if declared here. declared in .cpp
    std::string species; //Required
    Gender gender = UNKNOWN_GENDER;
    float weight = UNKNOWN_WEIGHT;
};


#endif //EE205_LAB08C_ALL_CREATURES_GREAT_AND_SMALL_ANIMAL_H
