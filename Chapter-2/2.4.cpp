#include <iostream>
using namespace std;

int main(){

    int months = 0;
    double loan;

    cout << "How much is total amount loan? ";
    cin >> loan;

    double rate = 0.015;

    while(loan >= 50){
        months ++;
        loan = loan - 50 + (loan * rate);
        
        cout << months << ".ay odenen : " << 50 + (loan * rate) << "  ---  " << "kalan borc: " << loan + (loan * rate) << endl;
    }
        cout << months + 1 << ". ay odenen: " << loan + (loan * rate) << "      " << "kalan borc: " << "0.";










    return 0;
}