/*
Name:Jiaxuan Cao
*/
#include<iostream>
using namespace std;

void swap( int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;

}

void reverse(int a[], int size)
{
    for(int i=0;i<size/2;i++)
    {
        swap(&a[i],&a[size-i-1]);

    }
}
int main()
{
    int a[]={1,2,3,4,5};
    int size = sizeof(a)/4;
    reverse(a,size);

    for(int i=0; i < size;i ++ )
    {
        cout <<a[i]<<" ";
    }



    return 0;
}