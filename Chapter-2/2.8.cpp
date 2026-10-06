#include <iostream>
using namespace std;

int main(){

    double weight;
    double r;

    cout << "Enter the weight of object: ";
    cin >> weight;

    cout << "Enter the radius of a sphere: ";
    cin >> r;

    const double y = 62.4;
    const double pi = 3.14159;
    double volume = (4.0 / 3.0) * pi * r * r * r;
    double force = y * volume;

    if(force >= weight){
        cout << "It will float."<< endl;
    }
    else{
        cout << "It will sink" << endl;
    }





    return 0;
}