#include <iostream>
using namespace std;

int main(){

    int money;
    int coupon = 0;
    int chocalate = 0;

    cout << "Enter your money: ";
    cin >> money;

    while(money > 0){
        coupon++;
        money--;
        chocalate++;

        while(coupon >= 7)
        {
            chocalate++;
            coupon -= 6;
        }
    }
    cout << chocalate << endl;
    cout << coupon;
    return 0;
}