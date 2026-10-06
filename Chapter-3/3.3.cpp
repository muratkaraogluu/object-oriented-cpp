#include <iostream>
using namespace std;

int sum(int,int,int);

int main(){
    int x,y,z;
    cout << "Enter the three arugment for add: ";
    cin >> x >> y >> z;

    int k =sum(x,y,z);
    cout << k;





    return 0;
}

int sum(int a, int b, int c){
    int sum = a + b + c;
    return sum;
}