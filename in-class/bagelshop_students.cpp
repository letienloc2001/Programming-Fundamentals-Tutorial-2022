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

/*
    if ((choice < 'A') || (choice > 'F'))
    {
        cout << "Enter a choice between A to F" << endl;
    }
*/

if( choice == 'A')
    {
      // Get the number of items
        cout << "Enter the count = ";
        cin >> cnt;
        charges_every = cnt * EVERY_BAGEL_COST;
        cout << "charges_every: " << charges_every << endl << endl;

    }
    //calculate total charges
    total_charges = charges_every + charges_coffee +
                    charges_cream + charges_blueberry +
                    charges_garlic ;

    cout << "\nTotal charges are: $" << total_charges << endl;



}
