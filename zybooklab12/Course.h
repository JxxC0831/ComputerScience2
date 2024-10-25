#ifndef COURSEH
#define COURSEH

#include <iostream>
#include <string>

using namespace std;

class Course {
	// TODO: Declare private data members
	private:
		string courseNum;
		string courseTit;

	// TODO: Declare mutator functions 
	//       SetCourseNumber(), SetCourseTitle()
	public:
        Course();
		void SetCourseNumber(string num);
		void SetCourseTitle(string title);
	// TODO: Declare accessor functions - 
	//       GetCourseNumber(), GetCourseTitle()
        string GetCourseNumber();
        string GetCourseTitle();
	// TODO: Declare PrintInfo()
        void PrintInfo();
};

#endif