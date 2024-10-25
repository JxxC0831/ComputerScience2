#ifndef OfferedCourseH
#define OfferedCourseH
#include<iostream>
#include"Course.h"
using namespace std;

class OfferedCourse : public Course{
    private:
        
        string Name;
        string Location;
        string Time;

    public:
        OfferedCourse();
        void SetInstructorName(string instructorName);
	    void SetLocation(string location);
		void SetClassTime(string classTime);
        string GetInstructorName();
        string GetLocation();
        string GetClassTime();



};





#endif