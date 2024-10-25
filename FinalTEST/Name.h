/*
    @Name.h file
    @author:Jiaxuan Cao
    @last modify time: May 12, 2023
*/
#ifndef NAMEH
#define NAMEH

#include<iostream>
#include<string>
using namespace std;

class Name{
    public:
        Name();//default constructor
        Name(string wholeline);
        void setFirstName(string firstname);//set first name
        void setLastName(string lastname);//set last name
        void setFullName(string fullname);//set full name
        string getFirstName() const;//get first name
        string getLastName() const;//get last name
        string getFullName() const;//get full name

        void PrintName();  //print name

    private:
        string fname;
        string lname;
        string fullname;
};

#endif