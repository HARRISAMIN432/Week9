#include <iostream>
using namespace std;
void convertPINToDance(string pin);
int main()
{
    string pin;
    int i = 0 , count = 0 ;
    cout << "Enter your PIN (4 digits): ";
    cin >> pin;
    while(pin[i] != '\0') 
    {
        count++ ;
        i++ ;
    }
    for(int i = 0 ; pin[i] != '\0' ; i++)
    {
        if(pin[i] != '0' && pin[i] != '1' && pin[i] != '2' && pin[i] != '3' && pin[i] != '4' && pin[i] != '5' && pin[i] != '6' && pin[i] != '7' && pin[i] != '8' && pin[i] != '9')
        {
        cout << "Invalid input" ; 
        return 0 ;
        }
    }
    if (count == 4)
        convertPINToDance(pin); 
        else
        {
            cout << "Invalid input";
        }
}
void convertPINToDance(string pin)
{
    string dance[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado",
                        "Pop", "Lock", "Arabesque"};
    for (int i = 1; i <= 4; i++)
    {
        if (pin[i - 1] == '0')
            cout << dance[i - 1];
        if (pin[i - 1] == '1')
            cout << dance[i];
        if (pin[i - 1] == '2')
            cout << dance[i + 1];
        if (pin[i - 1] == '3')
            cout << dance[i + 2];
        if (pin[i - 1] == '4')
            cout << dance[i + 3];
        if (pin[i - 1] == '5')
            cout << dance[i + 4];
        if (pin[i - 1] == '6')
            cout << dance[i + 5];
        if (i == 1)
        {
            if (pin[0] == '7')
                cout << dance[7];
            if (pin[0] == '8')
                cout << dance[8];
            if (pin[0] == '9')
                cout << dance[9];
        }
        if (i == 2)
            if (pin[1] == '9')
                cout << dance[0];
            else
            {
                if (pin[i - 1] == '7')
                    cout << dance[i + 6];
                if (pin[i - 1] == '8')
                    cout << dance[i + 7];
            }
        if (i == 3)
        {
            if (pin[2] == '8')
                cout << dance[0];
            if (pin[2] == '9')
                cout << dance[1];
        }
        else
        {
            if (pin[i - 1] == '7')
                cout << dance[i + 6];
        }
        if (i == 4)
        {
            if (pin[3] == '7')
                cout << dance[0];
            if (pin[3] == '8')
                cout << dance[1];
            if (pin[3] == '9')
                cout << dance[2];
        }
        if (i != 4)
            cout << ", ";
    }
}