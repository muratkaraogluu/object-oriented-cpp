#include <iostream>
using namespace std;

char func(double);

int main(){

    double a;
    cin >> a;
    char t = func(a);
    cout << t;




    return 0;
}
char func(double x){
    if(x > 0)
    return 'P';
    else
    return 'N';
}