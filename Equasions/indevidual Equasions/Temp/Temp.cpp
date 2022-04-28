#include <iostream>

using namespace std;

int main() {

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

  if (type == "c" or type == "C"){
  double tempf;
  double tempc;

  cout << "Please insert the temp ";
  cin >> tempc;
  tempc = (tempc*1.8)+32;
  cout << "The temp is " << tempc << " degrees Farenhight.\n";
  }
}