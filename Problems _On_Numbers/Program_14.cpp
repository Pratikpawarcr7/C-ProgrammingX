/*
  Write a C program to display even numbers from 1 to N.
*/

#include <iostream>
using namespace std;

class Display
{
public:
    int iNo1;

    Display(int A)
    {
        iNo1 = A;
    }

    void Numbers()
    {
        int iCnt = 0;

        cout << "Even Elements Are : ";
        for (iCnt = 1; iCnt <= iNo1; iCnt++)
        {
            if (iCnt % 2 == 0)
            {
                cout << iCnt << "\n";
            }
        }
    }
};

int main()
{
    int iValue1 = 0;

    cout << "Enter the Number : " << "\n";
    cin >> iValue1;

    Display dobj(iValue1);
    dobj.Numbers();

    return 0;
}