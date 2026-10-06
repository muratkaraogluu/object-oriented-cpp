#include <iostream>
using namespace std;

int main(){
    
    int totalSec;
     cout << "Enter the total seconds: ";
    cin >> totalSec;
    int hour = totalSec / 3600;
    int min = (totalSec % 3600) / 60;
    int sec = (totalSec % 60);


    cout << "Hour : " << hour << endl;
    cout << "Minutes: " << min << endl;
    cout << "Seconds: " << sec << endl;






    return 0;
}