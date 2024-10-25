#include<iostream>
#include<string>
#include"UnivMember.h"
#include"Name.h"
#include"ID.h"
using namespace std;

UnivMember::UnivMember()
{
  
}

UnivMember::UnivMember(string name, string occupation)
{
    
    UnivName = Name(name); 
    Role = occupation;
    

}

void UnivMember::setUnivMemberName(string name)
{
   
  

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

