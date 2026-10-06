#include <iostream>
using namespace std;

int main(){

    double costItem;
    int numberOfYears;
    double rate;


    cout << "Enter the cost your item: ";
    cin >> costItem;

    cout <<"Enter the number of years from now that the item will be purchased: ";
    cin >> numberOfYears;

    cout << "Enter the rate of inflation : ";
    cin >> rate;

    double fixRate = rate / 100.0;
    

    for(int i =0; i < numberOfYears; i++){
        costItem = costItem + costItem * fixRate;
    }

    cout << "You should have to pay " << costItem << "in" << numberOfYears;



    return 0;
}