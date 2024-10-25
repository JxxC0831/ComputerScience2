#include"Name.h"
#include<iostream>
#include<string>

using namespace std;

Name::Name()
{
    fname="First";
    lname="Last";
}

Name::Name(string wholeline)
{
    int pos = wholeline.find(",");  
    int i=wholeline.length()-1;
    if(wholeline.at(i)==' ')
    {
       wholeline.erase(wholeline.size()-1);
    }
    lname = wholeline.substr(0, pos);
    fname= wholeline.substr(pos+1); 
   
    
}



void Name::setFirstName(string fname)
{
    
   this->fname = fname;

}

void Name::setLastName(string lname)
{
    this->lname = lname;
}

string Name::getFirstName() 
{
    return fname;
}
string Name::getLastName()
{
    return lname;
}

void Name::printname()
{
    cout << fname << " " <<lname <<endl;
   
}

