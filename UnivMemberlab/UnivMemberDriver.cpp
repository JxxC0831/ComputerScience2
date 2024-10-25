/*
@This program is to read the names from two files and print out the names with ID numbers.
@Author: Jiaxuan Cao
@Date: Apr. 21,2023
@Know bugs: None
*/
#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include"UnivMember.h"
#include"Name.h"
#include"ID.h"
using namespace std;

int main(){

    ifstream infile1, infile2;

    infile1.open("CSProfNames.txt");//open file1
    infile2.open("StudentsLastFirst.txt");//open file2

    if(!infile1 || !infile2)//check if file is open
    {
        cout << "File open failure"<<endl;
        return 0;
    }

    vector<UnivMember*> memberlist;

    string wholeline;//whole line for file1
    
    while(getline(infile1,wholeline))
    {  
        UnivMember *memberptr = new UnivMember(wholeline,"Prof");
        memberlist.push_back(memberptr);
    }
    
    
    string wholeline2;//whole line for file2

    while(getline(infile2,wholeline2))
    {
        UnivMember *memberptr2 = new UnivMember(wholeline2,"Student");
        memberlist.push_back(memberptr2);

    }

    for(int i=0;i<memberlist.size();i++)
    {
       memberlist[i]->PrintUnivMember();
    }

    for(int i=0;i<memberlist.size();i++)
    {
        delete memberlist[i];
    }

    infile1.close();
    infile2.close();
    return 0;
}
