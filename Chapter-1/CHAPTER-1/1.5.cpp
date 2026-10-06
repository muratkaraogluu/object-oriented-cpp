#include <iostream>
using namespace std;

int main(){

    int maxCap;
    int numberOfAttend;

    cout << "Enter the maximum room capacity: ";
    cin >> maxCap;

    cout << "Enter the number of people to attend the meeting: ";
    cin >> numberOfAttend;

    if(numberOfAttend <= maxCap)
    {
        cout << "That's okey for fire regulation." << maxCap - numberOfAttend << "people can be attend more."<< endl;
    }
    else
    {
        cout << "It is not okey for fire regulation." << numberOfAttend - maxCap << "people should be quit this meeting." << endl;
    }

    







    return 0;

}