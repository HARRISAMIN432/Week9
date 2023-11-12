#include<iostream>
using namespace std ;
bool areAllElementsIdentical(string arr[] , int size) ;
main()
{
    int size ;
    cout << "Enter the size of Array: " ;
    cin >> size ;
    string arr[size] ;
    for(int i = 1 ; i <= size ; i++) 
    {
        cout << "Enter Element " << i << ": " ;
        cin >> arr[i-1] ;
    }
    cout << areAllElementsIdentical(arr , size) ;
}

bool areAllElementsIdentical(string arr[] , int size) 
{
    for(int i = 0 ; i < size ; i++) 
    {
        if(arr[0] != arr[i]) return false ; 
    }
    return true ;
}
