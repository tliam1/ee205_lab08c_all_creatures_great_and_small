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
#include <iostream>

typedef enum {UNKNOWN_GENDER, MALE, FEMALE} Gender;
const float UNKNOWN_WEIGHT = -1;

class Animal {
public:
    Animal(const std::string &newSpecies);

    Animal(const std::string &newSpecies, Gender newGender);

    Animal(const std::string &newSpecies, Gender newGender, float newWeight);

    Animal(const std::string &newSpecies, float newWeight);

    static const std::string &getKingdom();

    const std::string &getSpecies() const;

    Gender getGender() const;

    void setGender(Gender newGender);

    float getWeight() const;

    void setWeight(float newWeight);
    //created by clion not me
    void printInfo();

    bool isValid();
protected:
    static const std::string kingdom; //forced to animalia and errors if declared here. declared in .cpp
    std::string species; //Required
    Gender gender = UNKNOWN_GENDER;
    float weight = UNKNOWN_WEIGHT;

    bool validateWeight(const float newWeight);
    bool validateSpecies(const std::string newSpecies);

private:
    void setSpecies (const std::string newSpecies);
};


#endif //EE205_LAB08C_ALL_CREATURES_GREAT_AND_SMALL_ANIMAL_H
