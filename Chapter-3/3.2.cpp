#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    unsigned int x; // only positive numbers seed must be positive number.
    cout << "Enter the seed number: ";
    cin >> x;
    srand(x);
    for(int i=0; i< 9; i++){
       cout <<  (RAND_MAX - rand()) / static_cast<double>(RAND_MAX) << endl;
    }




    return 0;
}