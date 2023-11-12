#include<iostream>
using namespace std ;
void evenOddTransform(int arr[], int size, int n) ;
main()
{
    int size , n;
    cout << "Enter the size of Array: " ;
    cin >> size ;
    int arr[size] ;
    for(int i = 1 ; i <= size ; i++) 
    {
        cout << "Enter Element " << i << ": " ;
        cin >> arr[i-1] ;
    }
    cout << "Enter number of times even-odd transformation need to be done: " ;
    cin >> n ;
    evenOddTransform(arr, size , n) ;
}

void evenOddTransform(int arr[] , int size , int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < size ;j++)
        {
            if(arr[j]%2 == 0) arr[j] -= 2 ;
            else arr[j] += 2 ;
        }
    }
    cout << "[" ;
    for(int i = 0 ; i < size ; i++)
    {
        cout << arr[i] ;
        if( i != size - 1) cout << ", " ;
    }
    cout << "]" ;
}