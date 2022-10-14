/* A program to demonstrate the use of the stream manipulators to format output.
   The program displays student names and GPA's in tabular form
*/

#include <iostream>
#include <iomanip>
#define NAME_COL_WIDTH 40
#define FNAME_COL_WIDTH 20
#define LNAME_COL_WIDTH 20
#define GPA_COL_WIDTH 4

using namespace std;

int main()
{
    // Display headings

    cout << "LAST NAME, FIRST NAME";
    cout << '\t';
    cout << "GPA";
    cout << endl;

    // Display the data in the table under the headings

    // ROW 1

    cout << "Ables, Jack";
    cout << '\t';
    cout << 3.1;
    cout << endl;

    // ROW 2

    cout << "Westermann, Celeste";
    cout << '\t';
    cout << 2.0;
    cout << endl;

    // ROW 3

    cout << "Johnson, Vonda";
    cout << '\t';
    cout << 3.67;
    cout << endl;
    cout << endl;

    // Use stream manipulators to format

    cout << "-----------------------------------------------------------------------\n";

    // Display headings

    // Column 1

    cout << left; // Left-justify names
    cout << setw(NAME_COL_WIDTH);
    cout << "LAST NAME, FIRST NAME";

    // Column 2
    cout << right; // Right-justify gpa
    cout << setw(GPA_COL_WIDTH);
    cout << "GPA";
    cout << endl;

    // Display the data in the table under the headings

    // ROW 1

    // Column 1

    cout << left; // Left-justify names
    cout << setw(NAME_COL_WIDTH);
    cout << "Ables, Jack";


    // Specify only fixed point notation with exactly two digits
    // to the right of the decimal point for all floating-point
    // values

    cout << fixed << showpoint << setprecision(2);

    // Column2

    cout << right; // Right-justify gpa
    cout << setw(GPA_COL_WIDTH);
    cout << 3.1;
    cout << endl;

    // ROW 2

    string name2 = "Westermann, Celeste";
    double gpa2 = 2.0;

    // Column 1

    cout << left; // Left-justify names
    cout << setw(NAME_COL_WIDTH);
    cout << name2;


    // Column 2

    cout << right; // Right-justify gpa
    cout << setw(GPA_COL_WIDTH);
    cout << gpa2;
    cout << endl;

    // ROW 3

    // Column 1

    cout << left; // Left-justify names
    cout << setw(NAME_COL_WIDTH);
    cout << "Johnson, Vonda";


    // Column 2

    cout << right; // Right-justify gpa
    cout << setw(GPA_COL_WIDTH);
    cout << 3.67;
    cout << endl;


    cout << "-----------------------------------------------------------------------\n";

    // Display headings

    // Column 1

    cout << left; // Left-justify names
    cout << setw(LNAME_COL_WIDTH);
    cout << "LAST NAME";

    cout << setw(FNAME_COL_WIDTH);
    cout << "FIRST NAME";


    // Column 2

    //cout << right; // Right-justify gpa
    cout << setw(GPA_COL_WIDTH);
    cout << "GPA";
    cout << endl;

    // Display the data in the table under the headings

    // ROW 1

    // Column 1

    cout << left; // Left-justify names
    cout << setw(LNAME_COL_WIDTH);
    cout << "Ables";

    cout << setw(FNAME_COL_WIDTH);
    cout << "Jack";


    // Specify only fixed point notation with exactly two digits
    // to the right of the decimal point for all floating-point
    // values

    cout << fixed << showpoint << setprecision(2);

    // Column2

    cout << right; // Right-justify gpa
    cout << setw(GPA_COL_WIDTH);
    cout << 3.1;
    cout << endl;

    // ROW 2

    string Fname2 = "Celeste";
    string Lname2 = "Westermann";
    double gpa21 = 2.0;

    // Column 1

    cout << left; // Left-justify names
    cout << setw(LNAME_COL_WIDTH);
    cout << Lname2;

    cout << setw(FNAME_COL_WIDTH);
    cout << Fname2;
    //cout << '\t';

    // Column 2

    cout << right; // Right-justify gpa
    cout << setw(GPA_COL_WIDTH);
    cout << gpa21;
    cout << endl;

    // ROW 3

    // Column 1

    cout << left; // Left-justify names
    cout << setw(LNAME_COL_WIDTH);
    cout << "Johnson";

    cout << setw(FNAME_COL_WIDTH);
    cout << "Vonda";
    //cout << '\t';

    // Column 2

    cout << right; // Right-justify gpa
    cout << setw(GPA_COL_WIDTH);
    cout << 3.67;
    cout << endl;

    return 0;
}
