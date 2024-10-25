#include"Course.h"
#include<iostream>
#include<string>

using namespace std;

Course::Course(){
    CourseName="";
    CourseCredits=-1;
    CourseCRN=-1;
    ProfName="";
    Time="";
}

Course::Course(string wholeline)
{
    int coursenameend = wholeline.find("!");
    CourseName = wholeline.substr(0,coursenameend);
    int coursecreditend = wholeline.find("@");
    CourseCredits = wholeline.substr(coursenameend+1,coursecreditend-coursenameend-1);
    int coursecrnend = wholeline.find("#");
    CourseCRN = wholeline.substr(coursecreditend+1,coursecrnend-coursecreditend-1);
    int profnameend = wholeline.find("*");
    ProfName = wholeline.substr(coursecrnend+1,profnameend-coursecrnend-1);
    Time = wholeline.substr(profnameend+1);

}

void Course::SetCourseName(string classname)
{
    CourseName = classname;
}

void Course::SetCourseCredits(string credits)
{
    CourseCredits = credits;
}
void Course::SetCourseCRN(string num)
{
    CourseCRN = num;
}
        
void Course::SetProfName(string profname)
{
    ProfName = profname;
}
void Course::SetTime(string time)
{
    Time = time;
}

bool Course::operator==(const Course & anothercourse)
{
    if(CourseCRN == anothercourse.CourseCRN)
        return true;
    else
        return false;
}
	
string Course::GetCourseName() const
{
    return CourseName;
}
string Course::GetCourseCredits() const
{
    return CourseCredits;
}
string Course::GetCourseCRN() const
{
    return CourseCRN;
}
string Course::GetProfName() const
{
    return ProfName;
}
string Course::GetTime() const
{
    return Time;
}
void Course::PrintInfo()
{
    cout << "Course Info:"<<endl;
    cout << "\tCourse Name: " << CourseName << endl;
    cout << "\tCourse Credits: " << CourseCredits << endl;
    cout << "\tCourse CRN: " << CourseCRN << endl;
    cout << "\tProf. Name: " << ProfName << endl;
    cout << "\tTime: " << Time << endl;
}