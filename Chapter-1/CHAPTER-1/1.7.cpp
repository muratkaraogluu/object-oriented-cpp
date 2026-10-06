#include <iostream>
using namespace std;

int main(){
double weightInPound;
int mets;
double minutes;

cout << "Enter your weight in pounds: ";
cin >> weightInPound;

cout << "Enter your how much mets in your activity: ";
cin >> mets;

cout << "Enter the minutes how many minutes you did this activity? ";
cin >> minutes;

double kilo = weightInPound / 2.2;

double Calories = 0.0175 * mets * kilo * minutes;

cout << "You burned " << Calories << "calories";





    return 0;
}