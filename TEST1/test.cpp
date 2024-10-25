#include <iostream>
using namespace std;
class GPA {
    public:
    GPA() 
    {cout << "Class GPA constructor" << endl;
    gpa = 4.0; // let's be optimistic!
    }
    ~GPA() 
    {cout << "Class GPA destructor" << endl;}
    private:
        float gpa;
    };
    class UniversityMember {
        public:UniversityMember() 
            {
            cout << "Class UniversityMember constructor" << endl;
            }
            ~UniversityMember() 
            {
                cout << "Class UniversityMember destructor" << endl;}
            };
    class student : public UniversityMember {
        public:student() {
            cout << "Class student constructor" << endl;}
            ~student() {cout << "Class student destructor" << endl;}
            private:GPA myGPA; // an object
            };
        int main() 
        {
            student SampleStudent; // put breakpoint here & 'step into' each object
            return 0; // Watch the destructors (performed in reverse)
        }
