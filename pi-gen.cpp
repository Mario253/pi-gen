//pi-gen.cpp: a program that will generate pi to the xth decimal place
#include <cmath>
#include <iostream>
using namespace std;


int main() {
    const double pi = 3.141592653589793;
    int places;
    cout << "Enter a number from 1 to 15, and I will print out pi to that decimal place (not rounded): ";
    cin >> places;
    cout.precision(places + 1);
    cout << pi << "\n";
}
