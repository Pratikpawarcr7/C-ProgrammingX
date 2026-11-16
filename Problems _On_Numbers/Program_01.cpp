/*
    Program Name : Display Numbers from 1 to 10

    Description :
    Write a C++ program to create a user-defined function named Display() that displays numbers from 1 to 10
    using a for loop.

    Function Name : Display()

    Logic :
    1. Initialize a counter variable iCnt.
    2. Use a for loop starting from 1.
    3. Repeat the loop until iCnt reaches 10.
    4. Display each number using printf().

    Main Function :
    Call the Display() function from main().
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

        for (iCnt = 1; iCnt <= 10; iCnt++)
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