#ifndef COURSEH
#define COURSEH

#include <iostream>
#include <string>

using namespace std;

class Course {
	private:
		string CourseName;
        string CourseCredits;
        string CourseCRN;
        string ProfName;
        string Time;
        
	public:
        Course();
        Course(string wholeline);
        void SetCourseName(string classname);
        void SetCourseCredits(string credits);
		void SetCourseCRN(string num);
		void SetProfName(string profname);
        void SetTime(string time);
        bool operator==(const Course & anothercourse);

        string GetCourseName() const;
        string GetCourseCredits() const;
        string GetCourseCRN() const;
        string GetProfName() const;
        string GetTime() const;

        void PrintInfo();
};



#endif