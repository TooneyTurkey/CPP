#include <iostream>

using namespace std;

int main() {
start:
string format;
int intialtime;
cout << "is your initial time in the 12 or 24 hour format(12/24) ";
cin >> format;
if (format == "12"){
    cout << "what is the time you would like to convert ";
    cin >> intialtime;
    goto ending;
}
if (format == "24") {
    cout << "what is the time you would like to convert ";

    goto ending;
}
cout << "please insert a valid time format \n";
goto start;
ending:
char* restart;
cout << "would you like to continue converting(y/n) ";
cin >> restart;

if (restart == "y" or restart == "Y"){
    goto start;
}
cout << "see you nextime!\n";
}