#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main ()
{
    /*
    int i=0;
     while(i>=0)
    {
        cout << "Hello World" << " "<<i<<endl;  
        i++;
    }
   

    long long a;

    int b;
    char c;
    string d;

    cout << sizeof(a)<<endl;
    cout << sizeof(b)<<endl;
    cout << sizeof(c)<<endl;
    cout << sizeof(d)<<endl;
*/
/*

int a=1;
int b=2;

cout <<"The sum of " << a<< " and "<<b<<" is "<<a+b<<endl;

*/

    string s1="Hello,123 ";
    string s2="Hello,234 ";
/*
    int x=s1.compare(s2);

    if(s1.compare(s2) == 0)
        cout << "Same"<<endl;
    else if(s1.compare(s2) > 0)
        cout<< "s1 greater than s2"<<endl;
    else 
        cout <<"s2 greater than s1";
*/
    string big_str = "Professor Karen Trovato";
    string title = big_str.substr(big_str.length());
   cout << s1 <<endl;
   int pos = s1.find(",");
   string s3=s1.substr(0,pos);
   string s4=s2.substr(pos+1);
    s4.erase(s4.size()-1);
   cout << s3 <<endl;
   cout <<s4 <<"Space here"<<endl;




/*
    string greeting;
    cout << "Enter a greeting: ";
    cin >> greeting;
    cout << greeting << endl;
    typedef int* IntPtr;
    IntPtr p1;
    IntPtr p;

*/
    return 0;
}

