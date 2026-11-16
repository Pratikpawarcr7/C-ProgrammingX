/*
    Program Name : Display Numbers up to N

    Description :
    Write a CPP program to accept one integer number from the user and display all numbers from 1
    up to the entered number using a for loop.

    Function Name : Display()

    Parameter : iNo - Accepts an integer number.

    Logic :
    1. Initialize the counter variable iCnt to 0.
    2. Start the for loop from 1.
    3. Repeat the loop until iCnt is less than
       or equal to iNo.
    4. Display each number using printf().
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

        for (iCnt = 1; iCnt <= iNo1; iCnt++)
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