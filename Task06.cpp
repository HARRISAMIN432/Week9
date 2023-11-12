#include<iostream>
using namespace std ;
int coloringTime(string cols[], int size) ;
main()
{
    int size;
    cout << "Enter the size of Array: " ;
    cin >> size ;
    string cols[size] ;
    for(int i = 1 ; i <= size ; i++) 
    {
        cout << "Enter Element " << i << ": " ;
        cin >> cols[i-1] ;
    }
    cout << "Time to color: " << coloringTime(cols,size) << " seconds" ;
}

int coloringTime(string cols[], int size)
{
    int time = 0 ;
    for(int i = 0 ; i < size ; i++)
    {
        if(i == size - 1) return time+2 ;
        if(cols[i] != cols[i+1]) time += 1 ;
        time += 2 ;
    }
    return time ;
}