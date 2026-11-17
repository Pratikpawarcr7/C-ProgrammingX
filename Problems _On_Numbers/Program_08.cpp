/*
    Program Name : Display Factors of a Number
    Description  : Accept a number and display the Addition of all its factors.
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

        return iSum;
    }
};

int main()
{

    int iValue = 0;
    int iRet = 0;

    cout << "Enter the Number ";
    cin >> iValue;

    Display_Factors dfobj(iValue);
    iRet = dfobj.Factors();

    cout << "Addition is : " << iRet;
    return 0;
}