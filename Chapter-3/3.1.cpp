#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

    cout << fixed << showpoint; // cout.setf(ios::fixed)  cout.setf(ios::showpoint)  cout.precision(2) 
  
    for(int i=1; i<= 10; i++){
    
        cout << i << ". number of sqrt = " << setprecision(2) << sqrt(i) << endl;
    }





    return 0;
}