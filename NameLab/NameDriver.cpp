#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include"Name.h"

using namespace std;


int main()
{  
    ifstream infile;
    infile.open("NamesLastFirst.txt");//open file

    if(!infile)//test if file open successfully
    {
        cout << "File open failure"<<endl;
        return 0;

    }

    vector<Name*> namelist;
    string wholeline;
    
    
    while(getline(infile,wholeline))
    {
        Name *name=new Name(wholeline);
        namelist.push_back(name);
        
    }
    infile.close();

    for(int i=namelist.size()-1;i>=0;i--)
    {

       namelist[i]->printname();
    }
    for(int i=0;i<namelist.size();i++)
    {
        delete namelist[i];
    }

return 0;
}