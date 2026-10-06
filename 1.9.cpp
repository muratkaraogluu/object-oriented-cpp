#include <iostream>
using namespace std;

int main(){
    int coupons;
    cout << "Enter the coupons: ";
    cin >> coupons;
    int candybar = coupons / 10;
    int gumball = (coupons % 10) / 3;

    cout << "You can have " << candybar << " candybar and " << gumball << " gumball.";





    return 0;
}