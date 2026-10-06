#include <iostream>
using namespace std;
const int MAX_NUMBER_SCORES = 10;

void fillArray(int a[], int size, int& numberUsed){
    cout << "Enter up to " << size << " nonnegative whole numbers." << endl
    << "Mark the end of the list with a negative number" << endl;
    int next, index = 0;
    cin >> next;
    while(next >= 0 && next < size){
        a[index] = next;
        index++;
        cin >> next;
    }
    numberUsed = index;
}
double computeAverage(const int a[], int numberUsed){
    double total = 0;
    for(int index = 0; index < numberUsed; index++){
        total = total + a[index];
    }
    if(numberUsed > 0){
        return total/numberUsed;
    }
    else{
        cout << "Error: number of elements is 0 in computeAverage" << endl
        << "compute average returns 0" << endl;
        return 0;
    }
}
void showDifference(const int a[], int numberUsed){
    double average = computeAverage(a,numberUsed);
    cout << "Average of the " << numberUsed
    << " scores = " << average << endl
    << "The score are: " << endl;
    for(int i=0; i < numberUsed; i++){
        cout << a[i] << " differs from average by " 
        << (a[i] - average) << endl;
    }
}
int main(){

    int score[MAX_NUMBER_SCORES], numberUsed;
    cout << "This program reads golf scores and shows" << endl
    << "how much each differs from the average." << endl;
    cout << "Enter the golf scores"<< endl;

    fillArray(score,MAX_NUMBER_SCORES, numberUsed);
    showDifference(score,numberUsed);



    return 0;
}