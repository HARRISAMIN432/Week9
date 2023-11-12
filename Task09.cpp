#include<iostream>
using namespace std ;
string longest7SegmentWord(string words[] , int size) ;
main()
{
    int size ;
    cout << "Enter the number of words: " ;
    cin >> size ;
    string words[size] ;
    cout << "Enter the words, one by one: " << endl;
    for(int i = 0 ; i < size ; i++)
    {
        cin >> words[i] ;
    }
    cout << "Longest 7-segment word: " << longest7SegmentWord(words,size) ;
}

string longest7SegmentWord(string words[] , int size) 
{
    string particularString , longestWord;
    bool found ;
    int count[size] ;
    for(int i = 0 ; i < size ; i++)
    {   
        count[i] = 0 ;
        found = false ;
        particularString = words[i] ;
        for(int k = 0 ; particularString[k] != '\0' ; k++) count[i]++ ;
        for(int j = 0 ; particularString[j] != '\0' ; j++)
        {
            if(particularString[j] == 'k' || particularString[j] == 'm' || particularString[j] == 'v' || particularString[j] == 'w' || particularString[j] == 'x')
            found = true ;
            if(found) break ;
        }
        if(found) continue ;
        if(i >= 1 && count[i] > count[i-1]) longestWord = particularString ;
        else longestWord = particularString[0] ;
        return particularString ;
    }
}