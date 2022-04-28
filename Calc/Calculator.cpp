#include <iostream>
#include <string>

using namespace std;
int main() {
begining:
    int initial_num;
    const char* mode;
cout << "Welcome to the calculator\n";
cout << "Please select a mode\n 1.additon\n 2.subtraction\n 3.multiplication\n 4.divison\n";
cin >> initial_num;
    if (initial_num == 1) mode = "addition";
    if (initial_num == 2) mode = "subtraction";
    if (initial_num == 3) mode = "multiplication";
    if (initial_num == 4) mode = "divison";

cout << "You have chosen the " << mode << " mode\n";

double first_numb;
double second_numb;
double solution;
string again;

if (mode == "addition"){
    cout << "Please enter in your initial number ";
    cin >> first_numb;
    cout << "Please enter the number you will be adding to that ";
    cin >> second_numb;
    solution = first_numb + second_numb;
    cout << "The awnser to " << first_numb << "+" << second_numb << " is " << solution << ".\n";}

if (mode == "subtraction"){
    cout << "Please enter in your initial number ";
    cin >> first_numb;
    cout << "Please enter the number you will be subtracting from that ";
    cin >> second_numb;
    solution = first_numb - second_numb;
    cout << "The awnser to " << first_numb << "-" << second_numb << " is " << solution << ".\n";}

if (mode == "multiplication"){
    cout << "Please enter in your initial number ";
    cin >> first_numb;
    cout << "Please enter the number you will be multuplying that by ";
    cin >> second_numb;
    solution = first_numb * second_numb;
    cout << "The awnser to " << first_numb << "*" << second_numb << " is " << solution << ".\n";}

if (mode == "divison"){
    cout << "Please enter in your initial number ";
    cin >> first_numb;
    cout << "Please enter the number you will be dividing that by ";
    cin >> second_numb;
    solution = first_numb / second_numb;
    cout << "The awnser to " << first_numb << "/" << second_numb << " is " << solution << ".\n";}

ending:
cout << "Would you like to continue calculating (y/n) ";
cin >> again;

if (again == "Y", again == "y"){
    goto begining;
}

if (again == "n", again == "N"){
    cout << "See you next time!\n";
    return 0;
}

if (again != "Y", again != "y", again != "N", again !="n"){
    cout << "Please enter y/n\n";
        goto ending;
}

}