#include <iostream>
using namespace std;

bool even(int);

int main(){
    int v;
    cin >> v;
    cout << boolalpha;
    cout << even(v);




    return 0;
}
bool even(int val){
    return (val % 2 == 0);
}