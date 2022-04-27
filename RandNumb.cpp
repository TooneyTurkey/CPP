#include <iostream>
#include <random>

using namespace std;

int main() {
    int min;
    int max;
    
    cout << "Please enter a min value ";
    cin >> min;
    cout << "Please enter a max value ";
    cin >> max;
    
random_device rd;
mt19937 rng(rd());
uniform_int_distribution<int> uni(min,max); 
auto random_integer = uni(rng);

  cout << "Your number is " << random_integer << "\n";

}