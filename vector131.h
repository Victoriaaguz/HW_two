#pragma once
#include <iostream>
#include <string>
using namespace std; 

// class named vector131, and should behave like a dynamic array
template <typename T>
class vector131
{
private:
    int size = 0; // number of element in the array
    int length = 0; // the capacity of the array
    T *vectorArray ; // pointer pointes to the dynamic array[]
    
public:
    vector131(){
        size = 0;
        length = 0;
    } // a default constructor
    void push_back(T number); // push back function; add the element to the back
    void push_front(T number); // add the element to the front
    void resize(int size); // resize the length/capacity
    void pop_back();
    //other functions 
    T operator[](int num);
    void PrintArray();//which print the array
    void getCapacity(int _length); // gets the size from member varbles
    //void Setsize(int _size) {size = _size;}
};
