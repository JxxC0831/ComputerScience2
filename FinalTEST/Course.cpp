/*
    @inplement file Course.cpp
    @Author: Jiaxuan Cao
    @Last modify time: May 12, 2023
*/
#include"Course.h"
#include<iostream>
#include<sstream>
#include<string>

using namespace std;

Course::Course(){}

Course::Course(string wholeline)
{
    stringstream ss(wholeline);
    getline(ss,CourseName,'@');
    getline(ss,CourseCredits,'\t');
    getline(ss,CourseCRN,'\t');
    getline(ss,ProfName,'\t');
    getline(ss,Time,'#');
};

void Course::SetCourseName(string classname) {
    CourseName = classname;
}

void Course::SetCourseCredits(string credits) {
    CourseCredits = credits;
}

void Course::SetCourseCRN(string num) {
    CourseCRN = num;
}

void Course::SetProfname(string profname) {
    ProfName = profname;
}

void Course::SetCourseTime(string time) {
    Time = time;
}

string Course::GetCourseName() const {
    return CourseName;
}

string Course::GetCourseCredits() const {
    return CourseCredits;
}

string Course::GetCourseCRN() const {
    return CourseCRN;
}

string Course::GetProfname() const {
    return ProfName;
}

string Course::GetCourseTime() const {
    return Time;
}

bool Course::operator==(const Course &c1) const
{
    return this->Time == c1.Time;
}
ostream& operator <<(ostream& os,const Course& s)
{
    os << "Coutse Info: "<<endl;
    os << "\tCourse Name: " << s.GetCourseName() << endl;
    os << "\tCourse Credits: " << s.GetCourseCredits() << endl;
    os << "\tCourse CRN: " <<s.GetCourseCRN() << endl;
    os << "\tProf. Name: " << s.GetProfname() << endl;
    os << "\tTime: " << s.GetCourseTime() << endl;
    os <<endl;

    return os;
}

void Course::PrintInfo() {
    cout << "Coutse Info: "<<endl;
    cout << "Course Name: " << CourseName << endl;
    cout << "Course Credits: " << CourseCredits << endl;
    cout << "Course CRN: " << CourseCRN << endl;
    cout << "Prof. Name: " << ProfName << endl;
    cout << "Time: " << Time << endl;
    cout <<endl;
}