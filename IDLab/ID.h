#ifndef ID_H
#define ID_H
#include<iostream>

using namespace std;

class ID{
    public:
        ID();
        void setID_number(int num);//set IDnumber
        void setfull_ID(string id);//set full ID
        int getID_number();//return ID number
        string getfull_ID();//return full ID
        void printID();//print ID
    
    private:
        string full_ID;
        int ID_number;
};

#endif