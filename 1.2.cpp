#include <iostream>
using namespace std;

int main(){
    const double SWEETER_RATIO = 0.001;

    double mouseWeight, mouseLethalDose, dieterWeight;

    cout << "Enter the weight of mouse: ";
    cin >> mouseWeight;

    cout << "Enter the LethalDose of mouse to kill a mouse:";
    cin >> mouseLethalDose;

    cout << "Enter the weight of a dieter: ";
    cin >> dieterWeight;

    double humanLethalDose = (mouseLethalDose/ mouseWeight) * dieterWeight;
    double maxSodaAllNeed = humanLethalDose / SWEETER_RATIO;

    cout << "Amount of max diet soda allowed before you dead: " << maxSodaAllNeed;












    return 0;
}