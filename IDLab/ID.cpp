#include"ID.h"
#include<iostream>
#include<string>
using namespace std;

ID::ID()
{
    static int currentNumber=10000000;
    ID_number=++currentNumber;
    full_ID="A"+to_string(ID_number);
    
    
}

void ID::setID_number(int num)
{
    ID_number=num;

}

void ID::setfull_ID(string id)
{
    full_ID=id;
}

int ID::getID_number()
{
    return ID_number;

}

string ID::getfull_ID()
{
    return full_ID;
}

void ID::printID()
{
    cout << full_ID << endl;
}