/*
    @Impletation of Name.h
    @author: Jiaxuan Cao
    @last modify time: May 12, 2023

*/
#include"Name.h"
#include<iostream>
#include<string>
#include<sstream>
using namespace std;

Name::Name()
{
    fname="no fname";
    lname="no lname";
}

Name::Name(string wholeline)
{
    stringstream ss(wholeline);
    getline(ss, fullname,'\t');
    int pos = fullname.find(",");
    lname = fullname.substr(2,pos-2);
    int namepos = fullname.length();
    fname = fullname.substr(pos+2,namepos-pos-3);
    fullname = fname + " " + lname;
}


void Name::setFirstName(string firstname)
{
    fname = firstname;
}

void Name::setLastName(string lastname)
{
    lname = lastname;
}

void Name::setFullName(string name)
{
    name = fname + " " + lname;
    fullname = name;
}

string Name::getFirstName() const
{
    return fname;
}

string Name::getLastName() const
{
    return lname;
}

string Name::getFullName() const
{
    return fullname;
}

void Name::PrintName()
{
    cout << "Student Name: " << fullname << endl;
}