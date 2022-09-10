#include <iostream>
#include <string>
using namespace std;
#include "vector131.cpp"

int main()
{
    //First, we try int 
    vector131<int>v1; 
    //capacity will be 5 initially,  resize() will decrease/increase the capacity/length
    v1.getCapacity(5);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_front(1);
    v1.pop_back(); 
   
    cout << "The elements in the array are: " << endl;
    v1.PrintArray();
    cout << "Resize the array by increase length to 10" << endl;
    cout << "The elements in the array after resize are: " << endl;
    v1.resize(10);
    v1.PrintArray();
    //Second, we try double
    vector131<double>v2;
    v2.getCapacity(5);
    v2.push_back(3.14);
    v2.push_back(9.26);
    v2.push_back(5.0);
    v2.push_front(10.0);
    v2.pop_back();
    cout << "The elements in the array are: " << endl;
    v2.PrintArray();
    v2.resize(10);
    cout << "Afer increase the capacity to 10, the elements are: " << endl;
    v2.PrintArray();
    return 0;
}
