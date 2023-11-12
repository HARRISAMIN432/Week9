#include <iostream>
using namespace std;
string findBrokenKeys(string correctPhrase, string actualTyped);
main()
{
    string correctPhrase, actualTyped;
    cout << "Enter the correct phrase: ";
    getline(cin, correctPhrase);
    cout << "Enter what you actually typed: ";
    getline(cin, actualTyped);
    cout << "Broken keys: " << findBrokenKeys(correctPhrase, actualTyped);
}

string findBrokenKeys(string correctPhrase, string actualTyped)
{
    string brokenKeys ;
    bool found ;
    for (int i = 0; correctPhrase[i] != '\0'; i++)
    {
        found = false ;
        for(int j = 0 ; brokenKeys[j] != '\0' ; j++)
        {
            if(correctPhrase[i] == brokenKeys[j]) found = true ;
            if(found) break ; 
        }
        if(found)  continue; 
        if (correctPhrase[i] != actualTyped[i])
        {
            brokenKeys += correctPhrase[i];
        }
    }
    return brokenKeys ;
}
