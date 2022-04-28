#include <iostream>

using namespace std;

int main() {
start:
string equation;
string equasions;

cout << "Please enter an arguement ";
cin >> equation;

if (equation == "ls" or equation == "LS"){
  cout << "The following are the currently avlable equations\n" << equasions;
} 
if (equation == "h" or equation == "H" or equation == "help" or equation == "Help"){
  cout << "Type 'ls' to list equasions and type in the equasion name to run it \n";
}
if (equation == "Temp"){
  double tempf;
  double tempc;
  string type;

  cout << "Is your Starting Number celsius(c) or fahrenheit(f) ";
  cin >> type;
  if (type == "f" or type == "F"){
  cout << "Please insert the temp ";
  cin >> tempf;
  tempc = (tempf -32)/1.8;
  cout << "The temp is " << tempc << " degrees Celsius.\n";
  }
}


while (true) goto start;



}
