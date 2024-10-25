/*
Name:Jiaxuan Cao
*/
#include <iostream>
using namespace std;

// Find the number of values stored that is less than 0 and the number greater than
// 0 in a partially filled array of int, which uses the special sentinel value 0 to 
// indicate the end of the array

void findGreaterAndLess(int arr[], int &lessThan, int &greaterThan)
{
	//To do: implement the function ...
    lessThan=greaterThan = 0;

    for(int i=0;arr[i]!=0;i++)
    {
        if(arr[i]<0)
            lessThan++;

        else
            greaterThan++;
    }




}

int main()
{
	int a[] = { -15, 23, 32, -12, 10, 9, -43, 5, -999, 0 };
	int less, greater;

	// ToDo: Call your function
    findGreaterAndLess(a, less, greater);
	// Print the results
	cout << "Number of values less than 0 is " << less << endl;
	cout << "Number of values greater than 0 is " << greater << endl;
	return 0;
}