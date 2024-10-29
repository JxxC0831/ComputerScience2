/*
    @implements Student.h
    @Author:Jiaxuan CAo
    @last modify time: May 12, 2023
*/
#include<iostream>
#include"Student.h"
#include"Name.h"
#include<string>
#include<sstream>
using namespace std;

Student :: Student():Name()
{
    CRN1 = CRN2 = CRN3 = CRN4 =CRN5 = " ";
}

Student ::Student(string wholeline) : Name()
{
    stringstream ss(wholeline);
    string name;
    getline(ss,name ,'\t');

    getline(ss, CRN1 ,'\t');
    getline(ss, CRN2 ,'\t');
    getline(ss, CRN3 ,'\t');
    getline(ss, CRN4 ,'\t');
    getline(ss, CRN5 ,'\t');
}


void Student::setCRN1(string crn1)
{
    CRN1=crn1;
}
void Student::setCRN2(string crn2)
{
    CRN2=crn2;
}
void Student::setCRN3(string crn3)
{
    CRN3=crn3;
}
void Student::setCRN4(string crn4)
{
    CRN4=crn4;
}
void Student::setCRN5(string crn5){
    CRN5=crn5;
}

string Student::getCRN1() const
{
    return CRN1;
}
string Student::getCRN2() const
{
    return CRN2;
}
string Student::getCRN3() const
{
    return CRN3;
}
string Student::getCRN4() const
{
    return CRN4;
}
string Student::getCRN5() const
{
    return CRN5;
}


void Student::PrintnamewithCRN()
{
   
    cout << "Courses Taken: "<<endl;
    cout << "1. "<<CRN1<<endl;
    cout << "2. "<<CRN2<<endl;
    cout << "3. "<<CRN3<<endl;
    cout << "4. "<<CRN4<<endl;
    cout << "5. "<<CRN5<<endl;
}   