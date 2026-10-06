#include <iostream>
using namespace std;

int main(){
const double metric = 35273.92;
double packageOunces;
cout << "Enter the package of breakfast cereal in ounces. ";
cin >> packageOunces;

double weightInTons = packageOunces / metric;
double boxedNeeded = metric / packageOunces;

cout << "weight of 1 package : " << weightInTons << endl;
cout << "needed package for 1 ton: " << boxedNeeded << endl;




    return 0;
}