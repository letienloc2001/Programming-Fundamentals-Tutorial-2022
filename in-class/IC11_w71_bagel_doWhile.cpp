/*
Write a program to calculate the amount a customer should pay in a self checkout counter for his
purchases in a bagel shop. The products sold are everything bagels, garlic bagels, blueberry bagels,
cream cheese, and coffee. Using doWhile loops write the program to display the menu of the
Bagel shop. Make the user buy multiple items of different choices. Finally display the total amount
for the purchases. Paste your output using different choices and different counts.
Also run a test for a choice not in Menu

1. Declare constants
2. Initialize all totals
3. do while loop - quit of choice F
    Menu display
    Validation of choice
    Switch - to calculate total for all the choices
4. Calculate the total of all
5. Display the total to the customer
*/


//This program implements bagel shop PoS
#include <iostream>
#include <iomanip>
using namespace std;

const float EVERY_BAGEL_COST = 1.99;
const float BLUE_BAGEL_COST = 1.99;
const float GARLIC_BAGEL_COST = 1.99;
const float CREAM_CHEESE_COST = 2.99;
const float COFFEE_COST = 3.99;

int main()
{
    char choice;
    int cnt;
    double total_charges = 0.0;
    double charges_every = 0.0;
    double charges_blueberry = 0.0;
    double charges_garlic = 0.0;
    double charges_cream = 0.0;
    double charges_coffee = 0.0;

    cout << fixed << showpoint << setprecision(2);

    do
    {
        cout << "Please pick one item from the menu:" << endl << endl;
        cout << "Enter A for Everything Bagel" << endl;
        cout << "Enter B for Blueberry Bagel" << endl;
        cout << "Enter C for Garlic Bagel" << endl;
        cout << "Enter D for Cream Cheese" << endl;
        cout << "Enter E for coffee" << endl;
        cout << "Enter F for quit" << endl << endl;
        cout << "Please enter your choice of food: ";

        // get the choice
        cin >> choice;
        while( ((choice < 'A') || (choice > 'F') )&& ((choice < 'a') || (choice > 'f')))
        {
            cout << "Enter a choice between A to F" << endl;
            cin >> choice;
        }



      switch(choice)
       {
           case 'a':
           case 'A':
            // Get the number of items
            cout << "Enter the count = ";
            cin >> cnt;
            charges_every += cnt * EVERY_BAGEL_COST;
            cout << "charges_every: " << charges_every << endl << endl;
            break;

            case 'b':
            case 'B':
            // Get the number of items
            cout << "Enter the count = ";
            cin >> cnt;
            charges_blueberry += cnt * BLUE_BAGEL_COST;
            cout << "charges_blueberry: " << charges_blueberry << endl << endl;
            break;

            case 'c':
            case 'C':
            // Get the number of items
            cout << "Enter the count = ";
            cin >> cnt;
            charges_garlic += cnt * GARLIC_BAGEL_COST;
            cout << "charges_garlic: " << charges_garlic << endl << endl;
            break;

            case 'd':
            case 'D':
            // Get the number of items
            cout << "Enter the count = ";
            cin >> cnt;
            charges_cream += cnt * CREAM_CHEESE_COST;
            cout << "charges_cream: " << charges_cream << endl << endl;
            break;

            case 'E':
            case 'e':
            // Get the number of items
            cout << "Enter the count = ";
            cin >> cnt;
            charges_coffee += cnt * COFFEE_COST;
            cout << "charges_coffee: " << charges_coffee << endl << endl;
            break;

       }


    }while( !((choice == 'F') || (choice =='f')));
        //calculate
    total_charges = charges_every + charges_coffee +
                    charges_cream + charges_blueberry +
                    charges_garlic ;

    cout << " \nTotal charges are: $" << total_charges << endl;



}
