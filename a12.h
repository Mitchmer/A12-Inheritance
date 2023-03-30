#ifndef A11_H
#define A11_H

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

const int MAX_PEOPLE {20};

class personType {
    private:

    //====================================================================
    //  Member variables
    //====================================================================
        string fName;
        string lName;
        string address;
        double height;
        string DOB;
        char gender;

    public:

    //====================================================================
    //  Member Methods
    //====================================================================
    //  Constructors
    //====================================================================

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

        void print();
        bool isEqualTo(personType&);
};

//==================================================================
//  Helper Functions
//==================================================================

void readFile(ifstream&, personType[]);
void splitName(string, personType&, string&, string&);

#endif