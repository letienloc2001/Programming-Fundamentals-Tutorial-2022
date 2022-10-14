// Swaping the digits in a two digit number

#include <iostream>
using namespace std;

int main()
{
    // declaring variables.
    int number, swappedNumber, d1, d2;
    number = 56;

    d1 = number / 10;
    d2 = number % 10;

    swappedNumber = (d2 * 10) + d1;

    cout << " The swapped number is " << swappedNumber << endl;

}
