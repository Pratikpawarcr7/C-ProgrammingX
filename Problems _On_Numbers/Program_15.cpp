/*
  Write a C program to check whether a number is positive or negative.
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

    bool Display_Positive_Negative()
    {
        int iCnt = 0;

        if (iNo1 > 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    int iValue1 = 0;
    bool bFlage = false;

    cout << "Enter the Number : " << "\n";
    cin >> iValue1;

    Display dobj(iValue1);
    bFlage = dobj.Display_Positive_Negative();

    if (bFlage == true)
    {

        cout << iValue1 << " is Positive \n";
    }
    else
    {

        cout << iValue1 << " is Negative \n";
    }

    return 0;
}
