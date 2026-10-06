#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

    string firstName, lastName;
    int score;
    fstream inputStream;
    inputStream.open("filename.txt");
    inputStream >> score;
    inputStream >> firstName >> lastName;

    cout << "Name:" << firstName << " "
         << "Last Name: " << lastName  << " "
        << "Score: " << score;
        inputStream.close();





    return 0;
}