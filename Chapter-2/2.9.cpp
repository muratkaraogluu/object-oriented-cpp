#include <iostream>
using namespace std;

int main(){

    int input;
    int rExercise;
    int pExercise;
    double rSum= 0;
    double pSum = 0;

    cout << "How many exercises to input: ";
    cin >> input;

    for(int i=1; i <= input; i++){
        cout << "Score received for exercise " << i <<":";
        cin >> rExercise;
        rSum += rExercise;
        cout << "Total points possible for exercise " << i <<":";
        cin >> pExercise;
        pSum += pExercise;
    }

    double percentage = rSum / static_cast<double>(pSum) * 100.0;

    cout << "Your total is" << rSum <<  "out of" << pSum << ", or " << percentage <<"%";





    return 0;
}