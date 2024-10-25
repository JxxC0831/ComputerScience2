#include"Course.h"
#include<iostream>  
using namespace std;
Course::Course()
{
    courseNum = "";
    courseTit = "";
}
void Course :: SetCourseNumber(string num)
{
    courseNum =num;
}
void Course :: SetCourseTitle(string title)
{
    courseTit = title;
}
string Course :: GetCourseNumber()
{
    return courseNum;
}
string Course :: GetCourseTitle()
{
    return courseTit;
}
void Course :: PrintInfo()
{
    cout << "Course Information:" <<endl;

    cout << "   Course Number: " <<courseNum << endl;
    cout << "   Course Title: " <<courseTit << endl;
}