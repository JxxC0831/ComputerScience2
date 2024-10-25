/*
    @A course object
    @Author:Jiaxuan Cao
    @Last modify time: May 12, 2023
*/
#ifndef STUDENTH
#define STUDENTH
#include<iostream>
#include<string>
#include"Name.h"
using namespace std;

class Student : public Name
{
    public:
        Student();//default constructor
        Student(string wholeline);//constructor
        void setCRN1(string crn1);//set crn1
        void setCRN2(string crn2);//set crn2
        void setCRN3(string crn3);//set crn3
        void setCRN4(string crn4);//set crn4
        void setCRN5(string crn5);//set crn5

        string getCRN1() const;//get crn1
        string getCRN2() const;//get crn2
        string getCRN3() const;//get crn3
        string getCRN4() const;//get crn4
        string getCRN5() const;//get crn5

        void PrintnamewithCRN();




    private:
        string CRN1, CRN2, CRN3, CRN4, CRN5;

};



#endif