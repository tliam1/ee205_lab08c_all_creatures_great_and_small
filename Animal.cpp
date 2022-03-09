///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab08c_all_creatures_great_and_small - EE 205 - Spr 2022
///
/// @file Animal.cpp
/// @version 1.0
///
/// @author Liam Tapper <@tliam@hawaii.edu>
/// @date   08_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include "Animal.h"
using namespace std;

const string Animal::kingdom = "Animalia";
//was added via code>generate>constructor
Animal::Animal(const string &newSpecies) : species(newSpecies) { //if empty, needs to be marked accordingly
    Animal::species = newSpecies; //no longer an empty constructor
}

Animal::Animal(const string &newSpecies, Gender newGender) : species(newSpecies), gender(newGender) {
    Animal::species = newSpecies;
    Animal::gender = newGender;
}

Animal::Animal(const string &newSpecies, Gender newGender, float newWeight) : species(newSpecies), gender(newGender), weight(newWeight) {
    Animal::species = newSpecies;
    Animal::gender = newGender;
    Animal::weight = newWeight;
}


Animal::Animal(const string &newSpecies, float newWeight) : species(newSpecies), weight(newWeight) {
    Animal::species = newSpecies;
    Animal::weight = newWeight;
}

const string &Animal::getKingdom() {
    return kingdom;
}

const string &Animal::getSpecies() const {
    return species;
}

Gender Animal::getGender() const {
    return gender;
}

void Animal::setGender(Gender gender) {
    Animal::gender = gender;
}

float Animal::getWeight() const {
    return weight;
}

void Animal::setWeight(float weight) {
    Animal::weight = weight;
}

void Animal::printInfo() {

}

bool Animal::isValid() {
    return false;
}
