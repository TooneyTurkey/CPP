#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main() {
begining:
    int initial_num;
    const char* mode;
cout << "Welcome to the calculator\n";
cout << "Please select a mode\n 1.additon\n 2.subtraction\n 3.multiplication\n 4.divison\n 5.history\n";
cin >> initial_num;
    if (initial_num == 1) mode = "addition";
    if (initial_num == 2) mode = "subtraction";
    if (initial_num == 3) mode = "multiplication";
    if (initial_num == 4) mode = "divison";
    if (initial_num == 5) mode = "history";
    if (initial_num >= 6) {
        cout << "Please enter a valid option";
        goto begining;
    }

cout << "You have chosen the " << mode << " mode\n";

double first_numb;
double second_numb;
double solution;
string again;
string history;
string histopt;

if (mode == "addition"){
    cout << "Please enter in your initial number ";
    cin >> first_numb;
    cout << "Please enter the number you will be adding to that ";
    cin >> second_numb;
    solution = first_numb + second_numb;
    cout << "The awnser to " << first_numb << "+" << second_numb << " is " << solution << ".\n";
    string sfirst_numb = to_string(first_numb);
    string ssecondnumb = to_string(second_numb);
    string ssolution = to_string(solution);
    history = sfirst_numb + " + " + ssecondnumb + " = " + ssolution;
}

if (mode == "subtraction"){
    cout << "Please enter in your initial number ";
    cin >> first_numb;
    cout << "Please enter the number you will be subtracting from that ";
    cin >> second_numb;
    solution = first_numb - second_numb;
    cout << "The awnser to " << first_numb << "-" << second_numb << " is " << solution << ".\n";
    string sfirst_numb = to_string(first_numb);
    string ssecondnumb = to_string(second_numb);
    string ssolution = to_string(solution);
    history = sfirst_numb + " - " + ssecondnumb + " = " + ssolution;
}

if (mode == "multiplication"){
    cout << "Please enter in your initial number ";
    cin >> first_numb;
    cout << "Please enter the number you will be multuplying that by ";
    cin >> second_numb;
    solution = first_numb * second_numb;
    cout << "The awnser to " << first_numb << "*" << second_numb << " is " << solution << ".\n";
    string sfirst_numb = to_string(first_numb);
    string ssecondnumb = to_string(second_numb);
    string ssolution = to_string(solution);
    history = sfirst_numb + " * " + ssecondnumb + " = " + ssolution;
}

if (mode == "divison"){
    cout << "Please enter in your initial number ";
    cin >> first_numb;
    cout << "Please enter the number you will be dividing that by ";
    cin >> second_numb;
    solution = first_numb / second_numb;
    cout << "The awnser to " << first_numb << "/" << second_numb << " is " << solution << ".\n";
    string sfirst_numb = to_string(first_numb);
    string ssecondnumb = to_string(second_numb);
    string ssolution = to_string(solution);
    history = sfirst_numb + " / " + ssecondnumb + " = " + ssolution;
    }
if (mode == "history"){
    cout << "Would you like to view or delete your history(v/d) ";
    cin >> histopt;
    if (histopt == "v" or histopt == "V"){
        ifstream file;
        file.open("history.txt",ios::in);
        string historyout;
        file >> historyout;
        cout << historyout;
        file.close();
    }

}

fstream file; //object of fstream class
    
   //opening file "history.txt" in out(write) mode
   file.open("history.txt",ios::app);
    
   if(!file)
   {
       cout<<"Error in creating history file\n";
       goto begining;
   }

   //write text into file
   file << history << "\n";
   file.close();
    

   file.open("history.txt",ios::in);
    
   if(!file)
   {
       cout<<"Error in opening file!!!\n";
       goto begining;
   }   

ending:
cout << "Would you like to continue calculating (y/n) ";
cin >> again;

if (again == "Y", again == "y"){
    goto begining;
}

if (again != "Y", again != "y", again != "N", again !="n"){
    cout << "Please enter y/n\n";
        goto ending;
}
cout << "See you next time!\n";
}