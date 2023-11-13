#include <iostream>
using namespace std;
int commonCharacters(string s1, string s2);
main()
{
    string s1, s2;
    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;
    cout << "Number of common characters: " << commonCharacters(s1, s2);
}

int commonCharacters(string s1, string s2)
{
    int commonCharactersCount = 0;
    int count_s1 = 0 , count_s2 = 0 ;
    for(int i = 0 ; s1[i] != '\0' ; i++) count_s1++ ;
    for(int i = 0 ; s2[i] != '\0' ; i++) count_s2++ ;
       for (int i = 0; i < count_s1 || i < count_s2 ; i++)
    {
        for (int j = 0; j < count_s2 ; j++)
        {
            if (s1[i] == s2[j])
            {                                                                                            
                commonCharactersCount++;
                s2[j] = '|';
                break ;
            }
        }
    }
    return commonCharactersCount;
}