#include<iostream>
using namespace std;

void fillInArray(int array[],int &size);
int index_of_min(int array[],int start, int num_used);
void selectionSort(int array[],int size);

int main()
{
    int size=10;
    int array[size];

    fillInArray(array,size);
    selectionSort(array,size);

    for(int i=0;i<size;i++)
    {
        cout << array[i]<<" ";
    }


    return 0;
}

void fillInArray(int array[],int &size)
{
    cout <<"How many numbers you have: ";
    cin >> size;
    cout <<"fill in array:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin >> array[i];

    }
}

int index_of_min(int array[],int start,int num_used)
{
    int min_index= start;
    for(int i=min_index;i<num_used;i++)
    {
        if (array[i]<array[min_index])
        {
            min_index=i;
        }
        

    }
    return min_index;
}

void selectionSort(int array[],int size)
{
    int min_num=0;
    for(int i=0;i<size;i++)
    {
        min_num=index_of_min(array,i,size);
        if(array[i] > array[min_num])
        {
        int temp;
        temp=array[i];
        array[i]=array[min_num];
        array[min_num]=temp;
        }
    }


}