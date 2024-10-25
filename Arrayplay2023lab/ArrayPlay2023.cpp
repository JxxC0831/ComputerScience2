/*
  @This program asks the user to enter a string of numbers and allows them to insert and delete numbers. It also arranges the numbers from largest to smallest.
  @Author:Jiaxuan Cao
  @last Modify Time: Feb.16
  @know Bug: Unknow.
*/


#include<iostream>
using namespace std;


void fillArray(int Array[],int& num_array);
void printArray(int Array[],int num_array);
bool IsSorted(int Array[] , int num_array);
void ValueInsert(int Array[],int &num_array,int new_val,bool flag);
int findInArray(int Array[], int num_array, int delete_val);
void ValueDelete(int Array[],int &num_array,int delete_val,bool flag);
void swap(int Array[], int &val);
void sort(int Array[], int num_array);
void Reverse(int Array[], int num_array);

int main()
{
	const int CAPACITY=20;
	int numArray[CAPACITY];
	int numArrayElems = 0;
	int newValue;//insert Value
	bool flag;//help to make sure array is sorted
	int del_val;//delete Value
	fillArray(numArray , numArrayElems);//ask user to input numbers

	printArray(numArray , numArrayElems);//print all numbers

	flag = IsSorted(numArray , numArrayElems);//check if sorted

	if(!flag)
		cout << "Array is not sorted"<<endl;
	else
		cout << "Array is sorted"<<endl;

	cout << "Enter a value to insert:";
	
	cin >> newValue;//insert value
	
	ValueInsert(numArray , numArrayElems , newValue , flag);//insert value in correct place

	printArray(numArray , numArrayElems);

	cout << "Enter a value to delete: ";

	cin >> del_val;//delete Value
	
	int result = findInArray(numArray ,  numArrayElems, del_val);//Check whether if found the value

	if(result == -1)
	{
		cout << "Not found\n";
		printArray(numArray , numArrayElems);
	}
	
	
	else
	{
		ValueDelete(numArray,numArrayElems,result,flag);//fount value and delete
	
	}

	if(!flag)
	{
		sort(numArray , numArrayElems);//if the array is not sorted, sorted it.
	}
	
	Reverse(numArray,numArrayElems);//reversing the sorted array
		
	return 0;
}


/*
  @This function ask user to input numbers and stored in array.

  @it will stop when user input -1

  @it also cout how many numbers user entered. and send back to main(num_array)
*/
void fillArray(int Array[],int& num_array)
{

	cout << "Enter non-negative integers. End with -1: ";
	int Size=20;
	num_array=0;
	for(int i=0;i<Size;i++)
	{
		cin >> Array[i];
		if(Array[i]==-1)
			break;

		num_array++;
	}
	
}


/*
  @this function is to print all array
*/
void printArray(int Array[],int num_array)
{
	for(int i=0;i<num_array;i++)
        {
                cout << Array[i]<<" ";
        }
	cout << endl;
}


/*
  @this function is to check whether the Array is Sorted.
  @return flase if not sorted
  @return true if sorted
*/

bool IsSorted(int Array[] , int num_array)
{
	for(int i=0;i<num_array-1;i++)
	{
		if(Array[i+1]<Array[i])
			return false;
		
	}
	return true;
}


/*
  @this function is to insert a value. it will take new_val which entered by user
  @if not sorted it will put the new Val at end of array
  @if sorted, it will put the right place
*/
void ValueInsert(int Array[],int& num_array,int new_val,bool flag)
{
	
	num_array +=1;
	
	if(!flag)
	        Array[num_array-1]=new_val;
	
	else
	{
		for(int i=0;i<num_array;i++)
		{
			if(new_val <= Array[i])
			{
								
				for(int j=num_array;j>i;j--)
				{
				
					Array[j]=Array[j-1];

				}
				Array[i]=new_val;

				break;
				
			}
			
			
		}
	}
	
}


/*
  @this function take two numbers and switch their value.
  @send these two numbers back to main
*/
void swap(int &a, int &b)
{
	int temp;
	temp = a;
	a=b;
	b=temp;

}


/*
  @this function is to find whether the delete value is in array.
  @if in array return original value
  @if not , return 01
*/
int findInArray(int Array[], int num_array, int delete_val)
{
	for(int i=0;i<num_array;i++)
	{
		if(Array[i]==delete_val)
			return delete_val;
		
			
	}
	return -1;
}


/*
  @this function is to deleted a value from array
  @it use flag to determine whether the function is sorted or not.
  @if sorted it will delete the value
  @if not it will use the last value in the array to replace the deleted value
*/
void ValueDelete(int Array[],int &num_array,int delete_val,bool flag)
{

	for(int i=0;i<num_array;i++)
	{
		if(Array[i] == delete_val)
		{
			if(!flag)
			{
				Array[i]=Array[num_array-1];
			}
			else
			{
			for(int j=i;j<num_array;j++)
				Array[j]=Array[j+1];

			}
		}
		
	}

	num_array-=1;
	printArray(Array,num_array);
}


/*
  @this function help to sort a not sorted function
  @it will check whether it sorted in the end
*/
void sort(int Array[], int num_array)
{
	for(int i=0;i<num_array-1;i++)
	{
		for(int j=0;j<num_array-i-1;j++)
		{
			if(Array[j]>Array[j+1])
				swap(Array[j],Array[j+1]);
		}
		
	}


	printArray(Array,num_array);
	bool flag;
	flag = IsSorted(Array , num_array);
	if(flag)
		cout << "Array is sorted"<<endl;
	else
		cout <<"Array is not sorted"<<endl;
}

/*
  @this function is to use reversing a sorted array
*/
void Reverse(int Array[], int num_array)
{
	int start = 0;//fiest num in array
	int end = num_array-1;//last num in array
	//cout << Array[num_array-1]<<endl;
	while(start <=end)
	{
		swap(Array[start],Array[end]);//replace the number 
		start++;//next num
		end--;//one before the last num
	
	}
	cout << "Reversing the Array is:"<<endl;
	printArray(Array,num_array);
}
