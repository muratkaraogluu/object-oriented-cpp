#include <iostream>
using namespace std;

int main(){
    double amountNeeded, interestRate;
    int months;

    cout << "Enter the amount you need to receive: ";
    cin >> amountNeeded;

    cout << "Enter the interest rate:(if interest %15 -> enter like this 0.15) ";
    cin >> interestRate;
    
    cout << "Enter the duration of the loan in months: ";
    cin >> months;
    
    double faceValue = amountNeeded / (1 - (interestRate * months / 12.0));
    double totalInterest = faceValue - amountNeeded;
    double monthlyPayment = faceValue / months;

    cout << "Face value required: $" << faceValue << endl;
    cout << "Total interest: $" << totalInterest << endl;
    cout << "Monthly payment: $" << monthlyPayment << endl;

    return 0;

}