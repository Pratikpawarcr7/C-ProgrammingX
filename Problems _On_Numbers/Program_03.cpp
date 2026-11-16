/*
    Program Name : Check Divisibility by 5

    Description :
    Accept a number from the user and check whether
    it is divisible by 5 using a Boolean function.

    Function Name : CheckDivisible()

    Return Type : bool
*/
#include <iostream>
#include <stdbool.h>

using namespace std;

class Display
{
public:
    int iNo1;

    Display(int A)
    {
        iNo1 = A;
    }

    bool CheckDivisible()

    {
        int iCnt = 0;

        if (iNo1 % 5 == 0)
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
    bool bFlag = false;

    cout << "Enter the Number : " << "\n";
    cin >> iValue1;

    Display dobj(iValue1);
    bFlag = dobj.CheckDivisible();

    if (bFlag == true)
    {
        cout << iValue1 << " Divisible By 5";
    }
    else
    {
        cout << iValue1 << " Is Not Divisible By 5";
    }

    return 0;
}