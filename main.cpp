/*
********************************************************************
*   Assignment: A12 Inheritance                                    *
*   Programmer: Mitch Merrell                                      *
*   Course: CS1B 80120                                             *
*   Due Date: 6 Apr 2023                                           *
*   Date Last Modified: 30 Mar 2023                                *
*------------------------------------------------------------------*
*   Purpose: Explore inheritance by creating a studentType class   * 
*       from the existing personType class                         *
*------------------------------------------------------------------*
*   Algorithm: *                                                   *
****************                                                   *
*   Step 1: Create constructors for the studentType class, using   *
*       the constructors from personType                           *
*   Step 2: Set up member variables and functions for the          *
*       personType class                                           *
*   Step 3: Create 3 student objects, as well as 2 personType      *
*       objects                                                    *
*   Step 4: Create personType and studentType arrays               *
*   STep 5: Loop over both arrays, calling the print methods for   *
*       each object                                                *
*   Step 6: Exit Program                                           *
********************************************************************
*/

#include "a12.h"

int main() {
    //ifstream inData;
/*
    personType people[MAX_PEOPLE];
    cout << "Test";
    cin.get();
    readFile(inData, people);
*/
    studentType students[MAX_STUDENTS] {};
    personType people[MAX_PEOPLE] {};

    studentType student1("Harry", "Potter", 3.5,  "Wizard", "23489057-9");
    studentType student2("Luke", "Skywalker", 3.7, "Jedi", "51723956-4");
    studentType student3("Lara", "Croft", 3.9, "Tomb Raider", "12309453-9");

    student1.setAddress("3593 Hillhaven Drive");
    student1.setHeight(5.2);
    student1.setDOB("04/09/1995");
    student1.setGender('M');

    student2.setAddress("987 Glendale Avenue");
    student2.setHeight(5.6);
    student2.setDOB("09/30/1984");
    student2.setGender('M');

    student3.setAddress("3129 Locust View Drive");
    student3.setHeight(6.1);
    student3.setDOB("11/23/1992");
    student3.setGender('F');

    personType person1("Bob", "Jameson", "1702 Clifford Street", 5.8, "12/03/1990", 'M');
    personType person2("Sarah", "Hagen", "4103 Hamill Avenue", 6.0, "05/12/1987", 'F');

    students[0] = student1;
    students[1] = student2;
    students[2] = student3;

    people[0] = person1;
    people[1] = person2;
    
    for (int i {}; i < MAX_PEOPLE; i++) {
        people[i].print();
    }
    for (int i {}; i < MAX_STUDENTS; i++) {
        students[i].print();
    }
    cout << "**********************************************" << endl;

    return 0;
}