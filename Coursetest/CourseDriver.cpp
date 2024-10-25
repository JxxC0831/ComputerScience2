#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include"Course.h"
using namespace std;

int main()
{
    ifstream infile1, infile2;

    infile1.open("CoursesFall2023Tab.txt");//open file1
   

    if(!infile1)//check if file is open
    {
        cout << "File open failure"<<endl;
        return 0;
    }

    vector<Course*> courselist;
    string line;//change name
    while(getline(infile1, line))
    {
        Course *courseptr = new Course(line);
        courselist.push_back(courseptr);
    }

    for(int i=0;i<courselist.size();i++)
    {
       courselist[i]->PrintInfo();
    }

    for(int i=0;i<courselist.size();i++)
    {
        delete courselist[i];
    }

    

    infile1.close();
    infile2.close();


    return 0;
}