#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
#include<string>
#include"UnivMember.h"
#include"Name.h"
#include"ID.h"
#include"Course.h"
using namespace std;

int main()
{
    ifstream infile1, infile2;

    infile1.open("CoursesFall2023Tab.txt");//open file1
    infile2.open("StudentsWithCRNs.txt");//open file2

    if(!infile1 || !infile2)//check if file is open
    {
        cout << "File open failure"<<endl;
        return 0;
    }


/*
//list of courses
    vector<UnivMember*> courselist;

    string line;//change name
    while(getline(infile1, line))
    {
        UnivMember *coursePtr = new UnivMember(line);
        courselist.push_back(coursePtr);
    }

   */
//list of students 
    vector<UnivMember> studentlist;
    string studentwholeline;

    while(getline(infile2,studentwholeline))
    {   
        string courses1,course2,course3,course4,course5;
        UnivMember student(studentwholeline,"Name");
        student.setCourseCRN(studentwholeline);
        courses1=student.getCourseCRN1(studentwholeline);
        course2=student.getCourseCRN2(studentwholeline);
        course3=student.getCourseCRN3(studentwholeline);
        course4=student.getCourseCRN4(studentwholeline);
        course5=student.getCourseCRN5(studentwholeline);
        
        studentlist.push_back(student);
       

    }

for(int i=0; i<studentlist.size();i++)
{
   studentlist[i].PrintUnivMember();
   cout <<"Course selected: "<<endl;
    cout << studentlist[i].getCourseCRN1(studentwholeline)<<endl;
    cout << studentlist[i].getCourseCRN2(studentwholeline)<<endl;
    cout << studentlist[i].getCourseCRN3(studentwholeline)<<endl;
    cout << studentlist[i].getCourseCRN4(studentwholeline)<<endl;
    cout << studentlist[i].getCourseCRN5(studentwholeline)<<endl;
    cout << endl;
}

/*
//print out 
    for(int i=0;i<courselist.size();i++)
    {
        courselist[i]->PrintUnivCourse();
    }

    for(int i=0;i<studentlist.size();i++)
    {
       studentlist[i]->PrintUnivMember();
    }





//delete
    for(int i=0;i<studentlist.size();i++)
    {
        delete studentlist[i];
    }

    for(int i=0;i<courselist.size();i++)
    {
        delete courselist[i];
    }
    */

    infile1.close();
    infile2.close();


    return 0;
}