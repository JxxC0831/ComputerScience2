#include"OfferedCourse.h"
#include<iostream>
#include<string>
using namespace std;

OfferedCourse :: OfferedCourse()
{
    Name = "";
    Location ="";
    Time = "";
}
void OfferedCourse :: SetInstructorName(string instructorName)
{
    Name = instructorName;
}
void OfferedCourse :: SetLocation(string location)
{
    Location = location;
}
void OfferedCourse :: SetClassTime(string classTime)
{
    Time = classTime;
}
string OfferedCourse :: GetInstructorName()
{
    return Name;
}
string OfferedCourse :: GetLocation()
{
    return Location;
}
string OfferedCourse :: GetClassTime()
{
    return Time;
}