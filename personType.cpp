#include "a12.h"

//==================================================
//  Member Definitions
//==================================================
//  Mutators
//==================================================

void personType::setFName(string str) {
    fName = str;
    return;
}

void personType::setLName(string str) {
    lName = str;
    return;
}

void personType::setAddress(string str) {
    address = str;
    return;
}

void personType::setHeight(double dbl) {
    height = dbl;
    return;
}

void personType::setDOB(string str) {
    DOB = str;
    return;
}
void personType::setGender(char ch) {
    gender = ch;
    return;
}

//====================================================
//  Accessors
//====================================================


string personType::getFName() const {
    return fName;
}

string personType::getLName() const {
    return lName;
}

string personType::getAddress() const {
    return address;
}

double personType::getHeight() const {
    return height   ;
}

string personType::getDOB() const {
    return DOB;
}

char personType::getGender() const {
    return gender;
}

//===================================================
//  Helper functions
//===================================================

void personType::print() {
    cout << fName << " " << lName << endl
         << address << endl
         << height << endl
         << DOB << endl
         << gender << endl << endl;
}

bool personType::isEqualTo(personType &person) {
    bool result {};

    if (
        fName == person.getFName() &&
        lName == person.getLName() &&
        address == person.getAddress() &&
        height == person.getHeight() &&
        DOB == person.getDOB() &&
        gender == person.getGender()
    )
        result = true;
    else
        result = false;

    return result;
}