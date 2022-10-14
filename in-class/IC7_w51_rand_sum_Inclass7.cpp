#include <iostream>
#include <ctime> // for time function
#include <cstdlib> // for rand and srand functions
using namespace std;

int main()
{
  // 1. Generate two random single-digit integers
  srand(time(0));
  int number1 = rand() % 45 + 43;
  int number2 = rand() % 59 + 35;

  //Display the sum of two numbers
  cout << " The sum of two numbers " << number1 << " + " << number2 <<
  " is " << number1 + number2 << endl;
}
