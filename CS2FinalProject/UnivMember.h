#ifndef UnivMember_H
#define UnivMember_H
#include<iostream>
#include<string>
#include"Name.h"
#include"ID.h"
#include"Course.h"
using namespace std;

class UnivMember
{
    public:
        UnivMember();//default constructor
        UnivMember(string name, string occupation);//constructor that takes in name and role
        UnivMember(string courseline);//constructor that takes in course
        void setUnivMemberName(string name);//set the name of the member
        void setUnivID(string id);//set the ID of the member
        void setRole(string occupation);//set the role of the member
        void setCourseCRN(string crn);
        

        string getUnivMemberName();//get the name of the member
        string getUnivID();//get the ID of the member
        string getCourse();//get the course of the member
        string getRole();//get the role of the membe
        string getCourseCRN1(string crn);
        string getCourseCRN2(string crn);
        string getCourseCRN3(string crn);
        string getCourseCRN4(string crn);
        string getCourseCRN5(string crn);

        
        
        void PrintUnivMember();//print out the name, ID and role of the member
        void PrintUnivCourse();//print out the courselist, including course name, course credits, course CRN, prof name, Time
        ~UnivMember();//destructor


    private:
        Name UnivName;
        ID UnivID;
        string Role;
        Course UnivCourse;


};
#endif
