//pi-gen.cpp: a program that will generate pi to the xth decimal place
#include <cmath>
#include <iostream>
using namespace std;


int main() {
    const char * pi = "3.14159265358979323846264338327950";
    int places;
    cout << "Enter a number from 1 to 32, and I will print out pi to that decimal place (not rounded): ";
    cin >> places;
    for (int i = 0; i < places + 2; i++) {
        cout << pi[i];
    }
    cout << "\n";
}
