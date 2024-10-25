/*
@author: Jiaxuan CAo
@last modify time: Apr. 13
@known bug: unknow
*/

#include<iostream>
#include"ID.h"
#include<string>
#include<vector>
using namespace std;

int main()
{
    vector<ID*> IDlist;
    
    for(int i=0;i<5;i++)
    {
        ID* idptr = new ID();
        IDlist.push_back(idptr);
    }

cout << "Printing ID's"<<endl;
    for(int i=0;i<IDlist.size();i++)
    {
        ID* idptr = IDlist[i];
        idptr->printID();
    }

    for(int i=0;i<5;i++)
    {
        delete IDlist[i];
    }
    


    return 0;
}