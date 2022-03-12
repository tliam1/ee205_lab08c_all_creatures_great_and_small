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
Animal::Animal(const string &newSpecies) { //if empty, needs to be marked accordingly
    setSpecies(newSpecies); //no longer an empty constructor
}

Animal::Animal(const string &newSpecies, Gender newGender) : gender(newGender) {
    setSpecies(newSpecies);
}

Animal::Animal(const string &newSpecies, Gender newGender, float newWeight) : gender(newGender), weight(newWeight) {
    setWeight(newWeight);
    setSpecies(newSpecies);
}


Animal::Animal(const string &newSpecies, float newWeight) : species(newSpecies){
    setWeight(newWeight);
    setSpecies(newSpecies);
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

void Animal::setGender(Gender newGender) {
    if (gender != UNKNOWN_GENDER && newGender != UNKNOWN_GENDER)
        throw logic_error("previous gender must be UNKNOWN_GENDER");

    Animal::gender = newGender;
}

float Animal::getWeight() const {
    return weight;
}

void Animal::setWeight(float newWeight) {
    if (!validateWeight(newWeight)){
         throw invalid_argument("Weight must be > 0!");
    }
    Animal::weight = newWeight;
}

void Animal::printInfo() {
    cout<< "Animal Fields" << endl;
    cout<< "Kingdom = [" << getKingdom() << "]" << endl;
    cout << "Species = [" << getSpecies() << "]" << endl;
    cout << "Weight = [" << getWeight() << "]" << endl;
    cout << "Gender = [" << getGender() << "]" << endl;
}

bool Animal::isValid() {
    if (!validateWeight(weight))
        return false;

    return true;
}

bool Animal::validateWeight(const float newWeight) {
    if (newWeight == UNKNOWN_WEIGHT)
        return true;

    if (newWeight > 0)
        return true;
    //not a good number / invalid
    return false;
}

bool Animal::validateSpecies(const std::string newSpecies) {
    if (newSpecies.empty())
        return false;

    return true;
}

void Animal::setSpecies(const std::string newSpecies) {
    if (!validateSpecies(newSpecies))
        throw invalid_argument("A species can not be empty");

    species = newSpecies;
}
