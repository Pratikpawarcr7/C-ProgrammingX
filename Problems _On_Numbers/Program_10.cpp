/*
    Program Name : Display Factors of a Number
    Description  : Accept a number and display the Perfect Number with Time Complexcity.
    Function     : DisplayFactor()
*/

#include <iostream>
using namespace std;
class Display_Factors
{
public:
    int iNo1;
    Display_Factors(int A)
    {
        iNo1 = A;
    }

    int Factors()
    {
        int iCnt = 0;
        int iSum = 0;

        for (iCnt = 1; iCnt < iNo1; iCnt++)
        {
            if (iNo1 % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        if (iSum == iNo1)
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

    int iValue = 0;
    bool iRet = false;

    cout << "Enter the Number ";
    cin >> iValue;

    Display_Factors dfobj(iValue);
    iRet = dfobj.Factors();

    if (iRet == true)
    {
        printf(" %d is a perfect number", iValue);
    }
    else
    {
        printf(" %d is not a perfect number", iValue);
    }
    return 0;
}
