#include <iostream>
using namespace std;

bool inOrder(int,int,int);

int main(){

int x,y,z;
cin >> x >> y >> z;
cout << boolalpha;
cout << inOrder(x,y,z);



    return 0;
}

bool inOrder(int a,int b, int c){

    return (a <= b && b <= c && a <= c);




}