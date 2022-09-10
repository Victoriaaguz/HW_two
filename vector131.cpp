#include "vector131.h"

template <typename T>
void vector131<T>::getCapacity(int _length) //initialize the capacity/length of the array, 
{                                // when reached the capacity, resize() will increase the capacity
    size = 0;
    length = _length;
    vectorArray = new T[length];
}
template <typename T> 
void vector131<T>::push_back(T number)
{
    //[size] will the the last element in the array, so number = [size]
    vectorArray[size] = number;
    size++; //after number added, size increase
}
template <typename T> 
void vector131<T>::push_front(T number)
{
    //shift the entire array by one
    for(int i = size; i>=0; i--)
    {
        vectorArray[i+1] = vectorArray[i];
    }
    vectorArray[0] = number; // replace the first element
    size++;
}
template <typename T> 
T vector131<T>::operator[](int num)
{
    return vectorArray[num];
}
template <typename T> 
void vector131<T>::resize(int number) // increase/decrease the capacity/length when reached the length we initialized early
{
    T *tempArray; //declare a temporary array, copy the array to temp later
    
    tempArray = new T[number]; // change the length
    for(int i =0; i<size; i++)
    {
        tempArray[i] = vectorArray[i]; // copy the element to temp array
    } 
    vectorArray = tempArray;
    size = number; // size also changed based on length
}
template <typename T> 
void vector131<T>::pop_back()
{
    size--;
}
template <typename T> 
void vector131<T>::PrintArray()
{
    for(int i =0; i<size; i++)
    {
        cout << vectorArray[i] << " ";
    }
    cout << endl;
}
