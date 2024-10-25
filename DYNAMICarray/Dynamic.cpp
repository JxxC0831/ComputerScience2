#include<iostream>
using namespace std;
int *ReadNumberSequence ( int & size)
{
    int *array=NULL;
    
    do{
        cout << "Enter the length of the number sequence:";
        cin >> size;
    }while(size<=0);

    array = new int[size];

    cout << "Enter "<<size<<" number of elements to store in the array:";
    for (int i=0;i<size;i++)
        cin >> array[i];
        
    return array;
}

int main()
{
    int * arrptr;
    int index;
    arrptr=ReadNumberSequence (index);
    
    for(int i=0;i<index;i++)
        cout << arrptr[i]<<endl;

    delete[] arrptr;
    return 0;
}