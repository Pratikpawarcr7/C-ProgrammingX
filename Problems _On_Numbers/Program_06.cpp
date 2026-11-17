/*
    Program Name : Display Factors of a Number
    Description  : Accept a number and display all its factors.
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

        cout << "Factors of " << iNo1 << " Are : \n";
        for (iCnt = 1; iCnt < iNo1; iCnt++)
        {
            if (iNo1 % iCnt == 0)
            {
                cout << iCnt << "\n";
            }
        }
    }
};

int main()
{

    int iValue = 0;

    cout << "Enter the Number ";
    cin >> iValue;

    Display_Factors dfobj(iValue);
    dfobj.Factors();
    return 0;
}