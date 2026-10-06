#include <iostream>
using namespace std;

int main(){

int feet;
int inc;
cout << "Enter the feet: ";
cin >> feet;
cout << endl;
cout << "Enter the inc: ";
cin >> inc;
int totalInc = (feet - 5) * 12 + inc;
int totalPayInc = totalInc * 5;
int totalPay = 110 + totalPayInc;

cout << totalPay;







    return 0;
}