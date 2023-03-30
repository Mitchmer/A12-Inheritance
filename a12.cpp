#include "a12.h"

//==================================================
//  Function Definitions
//==================================================

void readFile(ifstream &inFile, personType people[]) {
    // Open file for reading
    inFile.open("people.txt");
    for (int i {}; i < MAX_PEOPLE; i++) {
        string fullName {};
        string firstName {};
        string lastName {};
        string address {};
        double height {};
        string dob {};
        char gender {};

        getline(inFile, fullName);
        getline(inFile, address);
        inFile >> height;
        inFile.ignore(25, '\n');
        getline(inFile, dob);
        inFile.get(gender);
        inFile.ignore(25, '\n');

        splitName(fullName, people[i], firstName, lastName);
        
        people[i].setFName(firstName);
        people[i].setLName(lastName);
        people[i].setAddress(address);
        people[i].setHeight(height);
        people[i].setDOB(dob);
        people[i].setGender(gender);
        //people[i].print();
    }
    inFile.close();
    return;
}

void splitName(string fullName, const personType &person, string &firstName, string &lastName) {
    int endPos {};

    for (size_t i {}; i < fullName.length(); i++) {

        if (fullName[i] == ' ') {
            endPos = i;
            break;
        }
        else 
            endPos++;

    }

    firstName = fullName.substr(0, (endPos));
    lastName = fullName.substr((endPos+1), fullName.length());
    return;
}