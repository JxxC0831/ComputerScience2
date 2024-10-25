#ifndef NAME_H
#define NAME_H
#include<iostream>
#include<string>
using namespace std;

class Name{
    public:
        Name();//default constructor
        Name(string wholeline);//parse wholeline and assign privetes 
        void setFirstName(string fname);//set First Name
        void setLastName(string lname);// set Last Name
        string getFirstName();//First name getter
        string getLastName();//Getter 
        void printname();//print Name

    private:
        string fname;//first name
        string lname;//last name
        
    


};
#endif
