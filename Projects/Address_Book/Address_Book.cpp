#include<iostream>
#include<string>
using namespace std;

const int Max=1000;
struct Person
{
    /* data */
    string m_Name;
    int m_Sex;
    int m_age;
    string m_phone;
    string m_Addr;
};

struct Address_Book
{
    /* data */
    struct Person personArray[Max];
    int m_Size;
};


void showMenu()
{
    cout << "********************************"<<endl;
    cout << "***** 1. Add contacts      *****"<<endl;
    cout << "***** 2. Print contacts    *****" <<endl;
    cout << "***** 3. Delete contacts   *****" <<endl;
    cout << "***** 4. Search contacts   *****" <<endl;
    cout << "***** 5. Edit contacts     *****" <<endl;
    cout << "***** 6. Clean up contacts *****" <<endl;
    cout << "***** 0. Quiz address book *****" <<endl;
    cout << "********************************"<<endl;
}

void addPerson(Address_Book* p)
{
    //check if user have no space for a new person
    if(p->m_Size == Max)
        cout <<"Contacrs Full, Please delete first." <<endl;
    else
    {

        string name;
        cout << "Please enter name: "<<endl;
        cin >> name;
        p->personArray[p->m_Size].m_Name = name;


        int sex;
        cout <<"Please enter sex of contacts(Enter 1 for male and 2 for female): "<<endl;
        do
        {
            cin >> sex;
            if(sex == 1 || sex == 2)
            {
                p->personArray[p->m_Size].m_Sex = sex;
                break;
            }
            
            cout << "Fail input"<<endl;
        } while (sex != 1 && sex !=2);
    

        cout <<"Please enter age: "<<endl;
        int age=0;
        cin >> age;
        p->personArray[p->m_Size].m_age = age;

        cout <<"Please enter phone number: "<<endl;
        string phone_num;
        cin >> phone_num;
        p->personArray[p->m_Size].m_phone = phone_num;

        cout <<"Please enter Address: "<<endl;
        string address;
        cin >> address;
        p->personArray[p->m_Size].m_Addr = address;

        p->m_Size++;

        cout <<"Save successfully."<<endl;
        
    }
}

void PrintContacts(Address_Book *p)
{
    for(int i=0;i<p->m_Size;i++)
    {
        cout << i << ": " << endl;
        cout << "Name : " << p->personArray[i].m_Name << endl;
        
        if(p->personArray[i].m_Sex == 1)
            cout << "Gender: Male." <<endl;
        else
            cout << "Gender: Female." << endl;
        
        cout << "Age: " << p->personArray[i].m_age << endl;
        
        cout << "Phone Number: "<< p->personArray[i].m_phone << endl;

        cout << "Address: " << p->personArray[i].m_Addr << endl;
    }


}


void deleteContacts(Address_Book *p)
{
    for(int i=0;i<p->m_Size;i++)
    {
        



    }

}


int main()
{

    int Num_sel = 0;//user input a number for mune
    struct Address_Book abs;
    abs.m_Size=0;

    while(true)
    {
        showMenu();//Call Menu

        cin >> Num_sel;

        switch(Num_sel)
        {
            case 1: // Add contacts 
                addPerson(&abs);
                break;

            case 2: // Print sontacts 
                PrintContacts( &abs);
                break;

            case 3:  //Delete contacts
                break;


            case 4: //Search contacts
                break;

            case 5: //Edit contacts 
                break;

            case 6: //Clean up contacts
                break;

            case 0: //Quiz address book
                cout <<"Thank you for using address book management system" <<endl;
                goto stop;
                
            default: 
                cout <<"Number not exist, please try a number in the menu"<<endl;
                break;
    }

    }
    stop: 
    return 0;
}