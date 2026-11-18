/*
  Write a C program to calculate the sum of numbers from 1 to N.
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

    int Numbers()
    {
        int iCnt = 0;
        int iSum = 0;

        for (iCnt = 1; iCnt <= iNo1; iCnt++)
        {
            iSum = iSum + iCnt;
        }

        return iSum;
    }
};

int main()
{
    int iValue1 = 0;
    int iRet = 0;

    cout << "Enter the Number : " << "\n";
    cin >> iValue1;

    Display dobj(iValue1);
    iRet = dobj.Numbers();

    cout << "Addition is : " << iRet;

    return 0;
}