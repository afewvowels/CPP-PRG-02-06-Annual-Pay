//
//  main.cpp
//  PRG-2-6-Annual-Pay
//
//  Created by Keith Smith on 10/5/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Suppose an employee gets paid every two weeks and earns $2,200 each pay period. In
//  a year, the employee gets paid 26 times. Write a program that defines the following
//  variables:
//  payAmount       This variable will hold the amount of pay the employee earns each
//                  pay period. Initialize the variable with 2200.0
//  payPeriods      This variable will hold the number of pay periods in a year. Initialize
//                  the variable with 26.
//  annualPay       This variable will hold the employee's total annual pay, which will
//                  be calculated
//  The program should calculate the employee's total annual pay by multiplying the
//  employee's pay amount by the number of pay periods in a year and store the result in
//  the annualPay variable. Display the total annual pay on the screen.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    // Declare constants
    const float FLT_PAY_AMOUNT = 2200.0f;
    
    const int INT_PAY_PERIODS = 26;
    
    // Declare variable
    float fltAnnualPay;
    
    // Configure decimal output for dollar amount
    cout << setprecision(2) << fixed << showpoint;
    
    // Calculate annual pay
    fltAnnualPay = FLT_PAY_AMOUNT * static_cast<float>(INT_PAY_PERIODS);
    
    // Output results to console
    cout << "Total annual pay: $" << fltAnnualPay << endl;
    
    return 0;
}


