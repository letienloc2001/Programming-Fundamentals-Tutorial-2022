#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double x = 28.45678;
    double y = 42.98;

    cout << "X is " << x << endl;
    cout << "Y is " << y << endl;

    cout << setprecision(1);
    cout << "With precision 1: " << endl;
    cout << "X is " << x << endl;
    cout << "Y is " << y << endl;

    cout << setprecision(2);
    cout << "With precision 2: " << endl;
    cout << "X is " << x << endl;
    cout << "Y is " << y << endl;

    cout << setprecision(3);
    cout << "With precision 3: " << endl;
    cout << "X is " << x << endl;
    cout << "Y is " << y << endl;

    cout << setprecision(4);
    cout << "With precision 4: " << endl;
    cout << "X is " << x << endl;
    cout << "Y is " << y << endl;

    double z = 123456.78915;

    cout << setprecision(5);
    cout << "With precision 5 and setw(8): " << endl;
    cout << "X is " << setw(8) << x << endl;
    cout << "Y is " << setw(8) << y << endl;
    cout << "Z is " << setw(8) << z << endl;

    cout << endl;


    double c = 123.4,  d = 12;
    cout << "C is "  << c << endl;
    cout << "D is "  << d << endl;

    cout << setprecision(5);
    cout << "With precision 5 :" << endl;
    cout << "C is " << setw(8) << c << endl;
    cout << "D is " << setw(8) << d << endl;

    // show point will show the trailing zeros
    cout << setprecision(5) << showpoint;
    cout << "With precision 5 and showpoint:" << endl;
    cout << "C is " << setw(8) << c << endl;
    cout << "D is " << setw(8) << d << endl;

    cout << setprecision(5) << noshowpoint;
    cout << "With precision 5 and noshowpoint:" << endl;
    cout << "C is " << setw(8) << c << endl;
    cout << "D is " << setw(8) << d << endl;

    cout << endl;
    cout << setprecision(2) << fixed;
    cout << "With precision 2 fixed and setw(8): " << endl;
    cout << "X is " << setw(8) << x << endl;
    cout << "Y is " << setw(8) << y << endl;
    cout << "Z is " << setw(8) << z << endl;

    cout << endl;
    cout << setprecision(5) << showpoint;
    cout << "With precision 5 and showpoint:" << endl;
    cout << "C is " << setw(8) << c << endl;
    cout << "D is " << setw(8) << d << endl;

    // show point and fixed has been already set up
    cout << endl;
    cout << setprecision(3);
    cout << "With precision 3 fixed and setw(4) and left justified: " << endl;
    cout << "X is " << left << setw(4) << x << endl;
    cout << "Y is " << left << setw(4) << y << endl;
    cout << "Z is " << left << setw(5) << z << endl;

    cout << setprecision(3);
    cout << "With precision 3 fixed  and left justified: " << endl;
    cout << "X is " << left  << x << endl;
    cout << "Y is " << left  << y << endl;
    cout << "Z is " << left  << z << endl;

    cout << setprecision(3);
    cout << "With precision 3 fixed and right justified: " << endl;
    cout << "X is "  << right << setw(8) << x << endl;
    cout << "Y is "  << right << setw(8) << y << endl;
    cout << "Z is "  << right << setw(8) << z << endl;



}
