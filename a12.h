#ifndef A11_H
#define A11_H

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

const int MAX_STUDENTS {3};
const int MAX_PEOPLE {2};

class personType {

    //====================================================================
    //  Member variables
    //====================================================================
    private:
        string fName;
        string lName;
        string address;
        double height;
        string DOB;
        char gender;

    //====================================================================
    //  Member Methods
    //====================================================================
    //  Constructors
    //====================================================================
    public:

        personType();
            //  first name, last name
        personType(string, string);
            // first name, last name, address, height, dob, gender
        personType(string, string, string, double, string, char);

    //====================================================================
    //  Destructor
    //===================================================================

        ~personType();

    //====================================================================
    //  Accessors
    //====================================================================

        string getFName() const;
        string getLName() const;
        string getAddress() const;
        double getHeight() const;
        string getDOB() const;
        char getGender() const;

    //====================================================================
    //  Mutators
    //====================================================================

        void setFName(string);
        void setLName(string);
        void setAddress(string);
        void setHeight(double);
        void setDOB(string);
        void setGender(char);
    
    //====================================================================
    //  Other
    //====================================================================

        void print() const;
        bool isEqualTo(personType&) const;
};

class studentType : public personType {

    //====================================================================
    //  Member variables
    //====================================================================
    private:

        string id;
        double gpa;
        string classification;

    //====================================================================
    //  Member Methods
    //====================================================================
    public:

    //====================================================================
    //  Constructors
    //====================================================================
        studentType();
            //    first name, last name
        studentType(string, string);
            //    first name, last name, GPA, classification, id
        studentType(string, string, double, string, string);

    //====================================================================
    //  Mutators
    //====================================================================
        void setID(string);
        void setGPA(double);
        void setClassification(string);
    
    //====================================================================
    //  Accessors
    //====================================================================
        string getID() const;
        double getGPA() const;
        string getClassification() const;
    
    //====================================================================
    //  Other
    //====================================================================
        // Overrides personType print
        void print() const;
        // Overrides personType isEqualTo
        bool isEqualTo(studentType&) const;
};

//==================================================================
//  Helper Functions
//==================================================================

void readFile(ifstream&, personType[]);
void splitName(string, const personType&, string&, string&);

#endif