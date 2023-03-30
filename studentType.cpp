# include "a12.h"

//==============================================
//  Constructors
//==============================================

studentType::studentType() 
            :personType() {
    id = "DEFAULT ID";
    gpa = 1.0;
    classification = "DEFAULT CLASSIFICATION";
}

studentType::studentType(string firstName, string lastName) 
            :personType(firstName, lastName) {
    id = "DEFAULT ID";
    gpa = 1.0;
    classification = "DEFAULT CLASSIFICATION";
}

studentType::studentType(string firstName, string lastName, double tempGPA, string tempClassification, string tempID)
            :personType(firstName, lastName) {
    id = tempID;
    gpa = tempGPA;
    classification = tempClassification;
}

//=============================================
//  Mutators
//=============================================

void studentType::setID(string str) {
    id = str;
    return;
}

void studentType::setGPA(double num) {
    gpa = num;
    return;
}

void studentType::setClassification(string str) {
    classification = str;
    return;
}

//=============================================
//  Accessors
//=============================================

string studentType::getID() const {
    return id;
}

double studentType::getGPA() const {
    return gpa;
}

string studentType::getClassification() const {
    return classification;
}

//=============================================
//  Helper Functions
//=============================================

void studentType::print() const {
    personType::print();
    cout << "ID: " << id << endl
         << "GPA: " << fixed << showpoint << setprecision(1) << gpa << endl
         << "Classification: " << classification << endl;
}

bool studentType::isEqualTo(studentType &student) const {
    bool result {};
    if (
        getFName() == student.getFName() &&
        getLName() == student.getLName() &&
        getAddress() == student.getAddress() &&
        getHeight() == student.getHeight() &&
        getDOB() == student.getDOB() &&
        getGender() == student.getGender() &&
        id == student.getID() &&
        gpa == student.getGPA() &&
        classification == student.getClassification()
    )
        result = true;
    else 
        result = false;
    
    return result;
}