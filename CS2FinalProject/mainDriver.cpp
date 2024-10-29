/*
    @this program is to read in two files, one is course information, the other is student with their crns. 
    @it will print out the course information and student with their courses selection in two files.
    @it allowed user to search student and generate courses information for that student.
    @author:Jiaxuan Cao
    @last modify time: May 12, 2023
    @known bugs: none
    @version: Final version
*/
#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<fstream>
#include"Course.h"
#include"Name.h"
#include"Student.h"
using namespace std;

int main()
{
    ifstream infile1, infile2;//open two files
    string filename1="CoursesFall2023Tab.txt" , filename2 = "StudentswithCRN.txt";
    infile1.open(filename1);
    infile2.open(filename2);

    if(!infile1 || !infile2)//if file open failure
    {
        cout <<"File open failure" <<endl;
        return 0;
    }
    else
    {
        cout <<filename1 << " open successfully." <<endl;
        cout << filename2 << " open successfully." <<endl;
        cout << "Processing data..."<<endl;
        cout << "Done!" <<endl;
        cout << endl;
    }


    vector<Course>courselist;//create a vector to store course information
    string wholeline;//read in whole line
    while(getline(infile1, wholeline))//read in line by line
    {
        Course course(wholeline);
        courselist.push_back(course);
    }
    infile1.close();
    
    
    string line;
    vector<Name*> studentlist;//create a vector to store student information
    vector<Student*> crnlist;//create a vector to store student with crn information
    while(getline(infile2,line))
    {
        Name *studentname = new Name(line);
        studentlist.push_back(studentname);
        Student *crns = new Student(line);
        crnlist.push_back(crns);


    }
    infile2.close();
    
    //print out course information in a file
    ofstream outfile;//open a file to write in
    string outfilename = "CourseInfo.txt";
    outfile.open(outfilename);
    if(!outfile)
    {
        cout << "No such file for read in"<<endl;
        return 0;
    }
    else
    {
        cout << outfilename << " open successfully!"<<endl;
        cout << "Processing data..."<<endl;
        cout << "Done!" <<endl;
        cout << "Please check data in "<<outfilename<<endl;
        cout <<endl;
    }


    for(int i=0; i<courselist.size();i++)
    {

        outfile << courselist[i];
        outfile <<endl;
 
    }
    outfile.close();


    //print out student with their course information in a file
    ofstream outfile2;
    string outfilename2 = "StudentswithCourseInfo.txt";
    outfile2.open(outfilename2);
   //Check if file open successfully
    if(!outfile2)
    {
        cout << "Cannot find StudentswithCourseInfo.txt"<<endl;
    }
    else
    {
        cout << outfilename2 << " open successfully!"<<endl;
        cout << "Processing data..."<<endl;
        cout << "Done!" <<endl;
        cout << "Please check data in "<<outfilename2<<endl;
        cout <<endl;
    }

    for(int i=0;i<studentlist.size();i++)
    {

        outfile2 << "Student Name: " << studentlist[i]->getFullName()<<endl;
        outfile2 << "Course Taken in detail: " <<endl;
        for(int j=0;j<courselist.size();j++)
        {
            if(crnlist[i]->getCRN1() == courselist[j].GetCourseCRN())
            {
               outfile2 << courselist[j];;

            }
    
            if(crnlist[i]->getCRN2() == courselist[j].GetCourseCRN())
            {

               outfile2 << courselist[j];
            }
            if(crnlist[i]->getCRN3() == courselist[j].GetCourseCRN())
            {
                outfile2 << courselist[j];

            }
           if(crnlist[i]->getCRN4() == courselist[j].GetCourseCRN())
            {
               outfile2 << courselist[j];
               
            }
           if(crnlist[i]->getCRN5() == courselist[j].GetCourseCRN())
            {
               outfile2 << courselist[j];
               
            } 
        }

    }  
               
    outfile2.close();  

    //search student and print out their course information
    char choice;
    char ch;
    string fname, lname;

    cout << "Do you want to search for students?(y/n)"<<endl;
    cin >> choice;
    
    while(choice == 'y')
    {

        cout << "Please enter the student's name(first+last): "<<endl;
        cin >> fname >> lname;
        string name;
        name = fname + " " + lname;


        for(int i=0;i<studentlist.size();i++)
        {
            studentlist[i]->getFullName();
            if(name == studentlist[i]->getFullName())
            {
                cout << "Find it! Here are clases he/she choosed"<<endl;
                for(int j=0;j<courselist.size();j++)
                {
                
                    if(crnlist[i]->getCRN1() == courselist[j].GetCourseCRN())
                    {
                        cout << courselist[j];;
                    }
                    
                    if(crnlist[i]->getCRN2() == courselist[j].GetCourseCRN())
                    {

                        cout << courselist[j];
                    }
                    if(crnlist[i]->getCRN3() == courselist[j].GetCourseCRN())
                    {
                        cout << courselist[j];

                    }
                    if(crnlist[i]->getCRN4() == courselist[j].GetCourseCRN())
                    {
                        cout<<courselist[j];
                            
                    }
                    if(crnlist[i]->getCRN5() == courselist[j].GetCourseCRN())
                    {
                        cout << courselist[j];
                            
                    } 
                    

                }
                break;
            }
        }
            cout << "Do you want to search for students?(y/n)"<<endl;
            cin >> choice;

    }


    


   
    //delete dynamic memory
    for(int i=0; i<studentlist.size();i++)
    {
        delete studentlist[i];
    }
    for(int i=0; i<crnlist.size();i++)
    {
        delete crnlist[i];
    }
    


    return 0;
}