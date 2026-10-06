#include <iostream>
using namespace std;

int main(){
    double n;
    double guess;
    double r;
    cout << "enter the number: ";
    cin >> n;
    guess = n/2;
    for(int i = 0; i < 100; i++){
        r = n / guess;
        guess = (guess + r) / 2.0;
    }
    cout << guess;





    return 0;
}