#include <iostream>
using namespace std;

int main(){
    double annualSalary;
    const double retroactiveIncrease = 0.076;
    cout << "Enter the annual salary of worker: ";
    cin >> annualSalary;

    double annualIncrease = annualSalary * retroactiveIncrease;
    double retroactiveIncrease6Month = annualIncrease / 2;
    double newAnnualSalary = annualSalary + annualIncrease;
    double newMonthlySalary = newAnnualSalary / 12;

    cout << "New Annual Salary : " << newAnnualSalary << endl;
    cout << "New Monthly Salary: " << newMonthlySalary << endl;
    cout << "pay of retroactive for 6 months: " << retroactiveIncrease6Month;







    return 0;
}