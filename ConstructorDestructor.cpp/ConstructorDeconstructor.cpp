#include<iostream>
using namespace std;

class BaseClass{
    public:
        BaseClass()
        {
            cout <<"This is the BaseClass constructor\n";
        }
        ~BaseClass()
        {
            cout <<"This is the BaseClass Destructor\n";
        }
};

class DerivedClass : public BaseClass
{
    public:
        DerivedClass()
        {
            cout <<"This is the DerivedClass constructor\n";
        }
        ~DerivedClass()
        {
            cout <<"This is the DerivedClass Destructor\n";
        }


};


int main()
{
    cout << "We will now define a derivedClass object";
    DerivedClass dObject;
    cout << "The program is now going to end\n";

    return 0;
    
}