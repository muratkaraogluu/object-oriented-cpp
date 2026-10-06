#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string firstName, lastName;
    int score;

    cout << "Enter your name: ";
    cin >> firstName;

    cout << "Enter your surname: ";
    cin >> lastName;

    cout <<"Enter your score: ";
    cin >> score;

    ofstream outputStream;
    outputStream.open("player.txt");

    if(!outputStream){
        cout <<"Error to creat file";
        return 1;
    }
    
    outputStream << firstName << lastName << score;

    outputStream.close();

    cout << "Your informations saved in file of player.txt";

    fstream inputStream;
    inputStream.open("player.txt");
    if(!inputStream){
        cout << "File error!";
        return 1;
    }
    string kelime;
    while(inputStream >> kelime){
        cout << "Okunan parca" << kelime << endl;
    }
    inputStream.close();










    return 0;
}