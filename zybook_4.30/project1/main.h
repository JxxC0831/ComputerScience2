#ifndef MAIN_H
#define MAIN_H
#include <iostream>
#include <string>
using namespace std;

template<typename T1, typename T2>
class StatePair {

// TODO: Define constructors
public:
   StatePair(){};
   StatePair(T1 userKey, T2 userValue): userKey(userKey), userValue(userValue){};
   
// TODO: Define mutators, and accessors for StatePair
    

	void SetKey(T1 key){
        userKey = Key;
    }
    void SetValue(T2 value){
        userValue=value;
    }
    T1 getuserKey() const
    {
        return userKey;
    }
    T2 getuserValue() const
    {
        return userValue;
    }
// TODO: Define PrintInfo() method

    void PrintInfo(){
        cout << userKey << ": " <<userValueuse;
    }

    private:
    T1 userKey;
    T2 userValue;
};

#endif