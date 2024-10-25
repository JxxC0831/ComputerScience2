/*
Name:Jiaxuan Cao
*/

#include <string>
#include <iostream>
using namespace std;

int countVowels(string word);

int main()
{
    string phrase;
    cout << "Enter a phrase: ";
    // To do: implement user input
    getline(cin,phrase);

    cout << "Number of vowels: " << countVowels(phrase) << endl;
}

// To do: Implement countVowels 
int countVowels(string word)
{
    
    int sum=0;
    
    for(int i=0;i<word.length();i++)
    {
        if(word.at(i) == 'a' || word.at(i) =='e' ||word.at(i) =='i' ||word.at(i) =='u' ||word.at(i) =='o')
            sum++;
        if(word.at(i) == 'A' || word.at(i) =='E' ||word.at(i) =='I' ||word.at(i) =='O' ||word.at(i) =='U')
            sum++;
    }
  

    
    
    return sum;
}