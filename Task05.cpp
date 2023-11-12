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
    string commonCharacters;
    bool found;
    for (int i = 0; s1[i] != '\0'; i++)
    {
        for (int j = 0; s2[j] != '\0'; j++)
        {
            if (s1[i] == s2[j])
            {
                commonCharactersCount++;
                commonCharacters += s1[i];
                s2[j] = '\0';
                break;
            }
        }
    }
    return commonCharactersCount;
}