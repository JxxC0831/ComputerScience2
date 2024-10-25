#ifndef UnivMember_H
#define UnivMember_H
#include<iostream>
#include<string>
#include"Name.h"
#include"ID.h"
using namespace std;

class UnivMember
{
    public:
        UnivMember();//default constructor
        UnivMember(string name, string occupation);//constructor that takes in name and role
        void setUnivMemberName(string name);//set the name of the member
        string getUnivMemberName();//get the name of the member
        void setUnivID(string id);//set the ID of the member
        string getUnivID();//get the ID of the member
        void setRole(string occupation);//set the role of the member
        string getRole();//get the role of the member
        void PrintUnivMember();//print out the name, ID and role of the member
        ~UnivMember();//destructor
        
    private:
        Name UnivName;
        ID UnivID;
        string Role;


};
#endif
