#include <iostream>
using namespace std;

void bubbleSort(int a[], int length){
    for(int i = length - 1; i > 0 ; i--){
        for(int j = 0; j < i ; j++){
            if(a[j] > a[j+1]){
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main(){

int a[] = {3, 10, 9, 2, 5, 1};
bubbleSort(a, 6);
for (int i=0; i<6; i++)
{
cout << a[i] << " ";
}
cout << endl;
return 0;

}