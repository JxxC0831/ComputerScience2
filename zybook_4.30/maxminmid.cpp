#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // to use sort()
using namespace std;

const int NUM_VALUES = 5;

// Input NUM_VALUES of TheType into the vector parameter
template<typename TheType> 
void Read(vector<TheType>& list) {
   for (int j = 0; j < NUM_VALUES; ++j) {
      cin >> list.at(j);
   }
}

// Output the elements of the vector parameter
template<typename TheType> 
void Write(vector<TheType>& list) {
   long unsigned int j;
   for (j = 0; j < list.size(); ++j) {
      cout << list.at(j) << " ";
   }
}

// Return the min, median, and max of the vector parameter in a new vector
template<typename TheType> 
vector<TheType> GetStatistics(vector<TheType>& list) {
   /* Type your code here. */
    vector<TheType> values;
    TheType min = list.at(0);
    for(int i=0;i<list.size();i++){
        if(list[i]<min){
            min = list[i];
        }
    }
    TheType max = list.at(0);
    for(int j=0;j<list.size();j++){
        if(list[j]> max){
            max = list[j];
        }
    }
    sort(list.begin(),list.end());
    TheType median = list.at(list.size()/2);

   values.push_back(min);
    values.push_back(median);
    values.push_back(max);
    return values;

}

// Read values into a vector, sort the vector, output the sorted vector,
// then output the min, median, and max of the sorted vector
template<typename TheType> 
void Run(vector<TheType>& list) {
   /* Type your code here. */
    Read(list);
    sort(list.begin(),list.end());
    Write(list);
    cout << endl;
   
    vector <TheType> values = GetStatistics(list);
  
    Write(values);

    
    cout <<endl;
    


}

int main() {
   vector<int> integers(NUM_VALUES);
   Run(integers);
   cout << endl;

   vector<double> doubles(NUM_VALUES);
   Run(doubles);
   cout << endl;

   vector<string> strings(NUM_VALUES);
   Run(strings);

   return 0;
}