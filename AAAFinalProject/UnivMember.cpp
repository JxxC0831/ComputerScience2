#include<iostream>
#include<string>
#include"UnivMember.h"
#include"Name.h"
#include"ID.h"
#include"Course.h"
using namespace std;

UnivMember::UnivMember()
{
  
}

UnivMember::UnivMember(string name, string occupation)
{
    
    UnivName = Name(name); 
    Role = occupation;
    

}

UnivMember ::  UnivMember(string courseline)
{
    UnivCourse = Course(courseline);
}

void UnivMember::setUnivMemberName(string name)
{
    UnivName = Name(name);

}

string UnivMember::getUnivMemberName() 
{
   string x,y;
   x=UnivName.getFirstName();
   y=UnivName.getLastName();
    return x+y;
}


void UnivMember::setUnivID(string id) 
{
    
}

string UnivMember::getUnivID() 
{
   string x=UnivID.getfull_ID();
    return x;
    
}

void UnivMember::setRole(string occupation)
{
    Role = occupation;
}
string UnivMember::getRole()
{
    return Role;
}


void UnivMember::setCourseCRN(string crn)
{
    string crn1,crn2,crn3,crn4,crn5;
    int pos1,pos2,pos3,pos4,pos5;
    pos1=crn.find("@");
    pos2=crn.find("!");
    pos3=crn.find("#");
    pos4=crn.find("$");
    pos5=crn.find("%");
    crn1=crn.substr(pos1+1,pos2-pos1-1);
    crn2=crn.substr(pos2+1,pos3-pos2-1);
    crn3=crn.substr(pos3+1,pos4-pos3-1);
    crn4=crn.substr(pos4+1,pos5-pos4-1);
    crn5=crn.substr(pos5+1);
    
}

string UnivMember::getCourseCRN1(string crn)
{
    string crn1;
    int pos1,pos2;
    pos1=crn.find("@");
    pos2=crn.find("!");
    
    crn1=crn.substr(pos1+1,pos2-pos1-1);
    return crn1;
}

string UnivMember::getCourseCRN2(string crn)
{
    string crn2;
    int pos1,pos2;
    pos1=crn.find("!");
    pos2=crn.find("#");
    crn2=crn.substr(pos1+1,pos2-pos1-1);
    return crn2;

}
 
string UnivMember::getCourseCRN3(string crn)
{
    string crn3;
    int pos1,pos2;
    pos1=crn.find("#");
    pos2=crn.find("$");
    crn3=crn.substr(pos1+1,pos2-pos1-1);
    return crn3;
}
string UnivMember::getCourseCRN4(string crn)
{
    string crn4;
    int pos1,pos2;
    pos1=crn.find("$");
    pos2=crn.find("%");
    crn4=crn.substr(pos1+1,pos2-pos1-1);
    return crn4;
}
string UnivMember::getCourseCRN5(string crn)
{
    string crn5;
    int pos1;
    pos1=crn.find("%");
    crn5=crn.substr(pos1+1);
    return crn5;
}
void UnivMember::PrintUnivCourse()
{
    UnivCourse.PrintInfo();
}

void UnivMember::PrintUnivMember()
{
    cout << Role <<": ";
    UnivName.printname();
    cout << "ID: " ;
    UnivID.printID();
    cout <<endl;
   
}
 UnivMember::~UnivMember()
 {
    
 }

