#include <iostream>
using namespace std;

int main(){


    for(int T = 1; T <= 9; T++)
    {
        for(int O = 0; O <= 9; O++)
        {
            for(int G = 1; G <= 9; G++)
            {
                for(int D = 0; D <= 9; D++)
                {
                    if((400 * T  == 1000 * G + 66 * O + D) && (T != O ) && (T != G ) && (T != D ) && (O != G ) && (O != D ) && (G != D )){
                        cout << T << " " << O << " " << G << " " << D << endl;
                        break;
                    }
                }
            }
        }
    }

    




    return 0;
}