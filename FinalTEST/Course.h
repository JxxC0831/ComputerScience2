/*
    @A course.h file
    @Author: Jiaxuan Cao
    @Last modify time: May 12, 2023
*/
#ifndef COURSEH
#define COURSEH

#include<iostream>
#include<string>
using namespace std;

class Course {
    public:
        Course();//default constructor
        Course(string wholeline);//constructor
        void SetCourseName(string name);//set course name
        void SetCourseCredits(string creditrs);//set course credits
        void SetCourseCRN(string crn);//set course crn
        void SetProfname(string name);//set prof name
        void SetCourseTime(string time);//set course time

        bool operator == (const Course &c1) const;//overload operator ==
        friend ostream& operator <<(ostream& os, const Course& s);//overload operator <<

        string GetCourseName() const;//get course name
        string GetCourseCredits() const;//get course credits
        string GetCourseCRN() const;//get course crn
        string GetProfname() const;//get prof name
        string GetCourseTime() const;//get course time
        
        void PrintInfo();//print course info


     private:
        string CourseName;
        string CourseCredits;
        string CourseCRN;
        string ProfName;
        string Time;
};

#endif