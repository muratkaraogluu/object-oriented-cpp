#include <iostream>
using namespace std;

int main(){
    const double sStax = 0.06;
    const double federalIncomeTax = 0.14;
    const double stateIncomeTax = 0.05;
    const int unionDues = 10; // have to pay $10
    const double perHoursRate = 16.78;
    int numberOfHoursInWeek;
    int numberOfDependents;
    double grossPay;
    int PayDependents = 0;

    cout << "Enter the numberofHours you work in a week: ";
    cin >> numberOfHoursInWeek;

    cout << "Enter the number of Dependents you have : ";
    cin >> numberOfDependents;



    if(numberOfHoursInWeek <= 40)
        {
        grossPay = numberOfHoursInWeek * perHoursRate;
        }
    else
        {
        grossPay = 40 * perHoursRate + (numberOfHoursInWeek - 40) * 16.78 * 1.5;
        }

    double paySstax = grossPay * 0.06;
    double payFederalIncomeTax = grossPay * 0.14;
    double payStateIncomeTax = grossPay * 0.05;

    if(numberOfDependents >= 3)
    {PayDependents = 35;}


    double netTakeHomePay = grossPay - (paySstax + payFederalIncomeTax + payStateIncomeTax + unionDues + PayDependents);


    cout << "Gross Pay: $" << grossPay << endl;
    cout << "SSTax : $" << paySstax << endl;
    cout << "FederalTax: $" << payFederalIncomeTax << endl;
    cout << "StateInCome Tax: $" << payStateIncomeTax << endl;
    cout << "Union Does: $" << unionDues << endl;
    cout << "Pay Dependents: $" << PayDependents << endl;
    cout << "Net take Home Pay: $" << netTakeHomePay << endl;



    return 0;
}