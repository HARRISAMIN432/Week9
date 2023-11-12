#include <iostream>
using namespace std;
string containsSeven(int numbers[], int size);
main()
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    int numbers[size];
    for (int i = 1; i <= size; i++)
    {
        cout << "Enter Element " << i << ": ";
        cin >> numbers[i - 1];
    }
    cout << containsSeven(numbers, size);
}

string containsSeven(int numbers[], int size)
{
    string particularString;
    int index , count ;
    for (int i = 0; i < size; i++)
    {
        count = 0 , index = 0 ;
        particularString = to_string(numbers[i]);
        while (particularString[index] != '\0')
        {
            count++;
            index++;
        }
        for (int j = 0; j < count; j++)
            if (particularString[j] == '7')
                return "Boom!";
    }
    return "there is no 7 in the array";
}