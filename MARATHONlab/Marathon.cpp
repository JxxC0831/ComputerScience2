/*
@The program will define a Timer array thatholds a Timer for each runner in a marathon. It will print the shortest and longest times for the marathoners.
@Author:Jiaxuan Cao
@last Modift Time: 3.4 
@last correction: wrote comments
@know bugs: unknow
*/
#include<iostream>
using namespace std;


/*
    @This structure define a time model include hour, minute and second.
*/
struct Timer
{
    /* data */
    int hour;
    int minute;
    int second;
};


/*
    @This function uses two timers and makes a comparison.
    @retun positive result if time2 faster than time1, negative value if time1 faster than time 2. 
*/

int compareTimes(Timer Time1, Timer Time2)
{
    int result=0;

    if (Time1.hour != Time2.hour)
    {
        return result=Time1.hour - Time2.hour;
    }
    else
    {
        if (Time1.minute != Time2.minute)
            return result=Time1.minute - Time2.minute;
        else
          return result=Time1.second - Time2.second;
        
    }
}


/*
@This function is to calculate the minimum timer and maximum timer. 

@no return type, but will modify the value of minTime and maxTime

*/
void findMinMaxTimer(Timer *arrptr,int size,Timer &minTime,Timer &maxTime )
{
    minTime = maxTime = arrptr[0];
    for(int i=0;i<size;i++)
    {
        if( compareTimes(arrptr[i],minTime)<= 0)
             minTime = arrptr[i];
        if(compareTimes(arrptr[i],maxTime)>= 0)
             maxTime = arrptr[i];
    }


}

/*
    @this function ask user to inpu the list of timer. Fill up the array with giving size.
*/

void readTimer( Timer *arrptr,int size)
{
   
    char achar;
    for(int i=0;i<size;i++)
     {
        cout << "Enter a Timer as hours:minutes:seconds(h:m:s)? ";
       
        cin >> arrptr[i].hour >> achar >> arrptr[i].minute >> achar >> arrptr[i].second;
        
        if(arrptr[i].hour<0 || arrptr[i].hour>24 || arrptr[i].minute<0 ||arrptr[i].minute>=60||arrptr[i].second<0||arrptr[i].second>=60)
         {   
            cout <<"Invalid Timer!"<<endl;
            i--;
         }
    
     }
    

}


/*
    @This function create a dynamically allocated array for timers. And ask user to input the timers. 
    @return: a pointer to the array
*/
Timer *creatTimeArray(int &size)
{
    Timer *arrptr = NULL;
    do
    {
        cout << "How many Timers do you need? ";
        cin >> size;
        if (size < 0)
        {
            cout << "Enter a positive value!" << endl;
        }
    } while (size < 0);

    arrptr = new Timer[size];
    
    readTimer(arrptr,size);

    return arrptr;
}



int main()
{
    int index=10;
    
    Timer *arrptr;

    arrptr = creatTimeArray(index);

    
    Timer minTime,maxTime;

    findMinMaxTimer(arrptr, index, minTime,maxTime);

    

    cout << "The minimum Timer is: " << minTime.hour << ":" << minTime.minute << ":"<<minTime.second<<endl;
    cout <<"The maximum Timer is: "<<maxTime.hour << ":"<< maxTime.minute << ":" << maxTime.second<<endl;



    delete[] arrptr;
    


    return 0;
}