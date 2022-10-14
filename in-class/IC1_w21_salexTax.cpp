
// Chapter 2, Programming Challenge 3: Sales Tax
#include <iostream>
using namespace std;

int main()
{
	// Constants
	const double STATE_SALES_TAX = 0.04;
	const double COUNTY_SALES_TAX = 0.02;

	// Store the purchase amount.
	double purchase = 95.0;

	// Calculate and store the amount of state sales tax.
	double stateSalesTax = purchase * STATE_SALES_TAX;

    // Calculate and store the amount of county sales tax.
	double countySalesTax = purchase * COUNTY_SALES_TAX;

	// Calculate and store the total amount of sales tax.
	double totalSalesTax = stateSalesTax + countySalesTax;
	cout << "Total Sales Tax is $" << totalSalesTax << endl;
	return 0;

}
