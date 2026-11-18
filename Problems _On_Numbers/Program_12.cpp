/*
  Write a C program to display numbers from N to 1.
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

        cout << "Numbers Are : " << "\n";
        for (iCnt = iNo1; iCnt >= 1; iCnt--)
        {
            cout << iCnt << "\n";
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