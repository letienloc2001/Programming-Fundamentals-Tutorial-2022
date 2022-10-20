//Displays time

#include <iostream>
using namespace std;

int main()
{    
  // Prompt the user for input
  int seconds;
  cout << "Enter an integer for seconds: ";
  cin >> seconds;

  int hours = seconds/3600;
  int remainingSeconds = seconds % 3600;
  int minutes = remainingSeconds / 60;
  remainingSeconds = seconds % 60;
  cout << seconds << " seconds is " << hours <<
    " hours and " << minutes << " minutes and "
    << remainingSeconds << " seconds " << endl;

  return 0;
}
