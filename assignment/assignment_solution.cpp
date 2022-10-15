//
//  assignment_solution.cpp
//  Programming_Fundamentals
//
//  Created by LE TIEN LOC on 16/10/2022.
//

#include <iostream>
#include <iomanip>

using namespace std;

void asm4_ex1() {
    float total_amount;
    float refund_rate;
    
    cout << "Enter the total amount: $ ";
    cin >> total_amount;
    
    if (total_amount < 1000) {
        cout << "Sorry, minimum $1000 is required to qualify for a refund." << endl;
    }
    else {
        refund_rate = 2 + 0.1 * (int(total_amount - 1000) / 1000);
        if (refund_rate > 4) {
            refund_rate = 4;
        }
        cout << "Your refund rate: " << refund_rate << "%" << endl;
        cout << "Your refund amount: $ " << setprecision(2) << fixed << refund_rate * total_amount / 100 << endl;
    }
    
    
}
void asm4_ex2() {
    int service_years;
    int vacation_days;
    
    cout << "Enter # of years of service: ";
    cin >> service_years;
    
//    if (service_years > 6) {
//        vacation_days = 21  + (service_years - 6);
//    } else if (service_years > 3) {
//        vacation_days = 15 + 2 * (service_years - 3);
//    } else if (service_years == 3) {
//        vacation_days = 15;
//    } else {
//        vacation_days = 10;
//    }
    
    if (service_years < 3) {
        vacation_days = 10;
    } else if (service_years >= 3) {
        vacation_days = 15 + 2 * (service_years - 3);
    } else {
        vacation_days = 21  + (service_years - 6);
    }
    cout << "# of vacation days: " << vacation_days << endl;
}

void asm5_ex1() {
    float annual_cost = 10000;
    float four_year_cost = 0;
    int year_index = 1;
    
    for (; year_index < 11; year_index++) {
        annual_cost *= 1.05;
        cout << "Tuition after " << year_index << " years is " << annual_cost << endl;
    }
    
    for (; year_index < 15; year_index++) {
        annual_cost *= 1.05;
        four_year_cost += annual_cost;
    }
    cout << endl << "The four-year tuition after ten years will be $" << four_year_cost << endl;
}
void asm5_ex2() {
    int working_days;
    int daily_earning = 0;
    float total_pay = 0;
    
    cout << "For how many days will you work? ";
    while (!(cin >> working_days) || working_days < 1) {
         cin.clear();
         cin.ignore(numeric_limits<streamsize>::max(), '\n');
         cout << "Do not accept a number less than 1 for the number of days worked" << endl;
    }
    
    cout << endl << "Day" << "\t\t" << "Pennies Earned" << endl;
    for (int index = 0; index < working_days; index++) {
        if (index == 0) {
            daily_earning = 1;
        } else {
            daily_earning = 2 * daily_earning;
        }
        total_pay += daily_earning;
        cout << index + 1 << "\t\t" << daily_earning << endl;
    }
    
    cout << endl << "Total pay: $" << total_pay / 100 << endl;
}

void asm6_ex1() {}

int main() {
    asm6_ex1();
    return 0;
}
