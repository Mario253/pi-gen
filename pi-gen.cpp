//pi-gen.cpp: a program that will generate pi to the xth decimal place
#include <iostream>
using namespace std;

char * pi = "14159265358979323846264";

int main() {
    int places;
    cout << "Enter a number from 1 to 23, and I will print out pi to that decimal place (not rounded): ";
    cin >> places;
    cout << "3.";
    for (int i = 0; i < places; i++) {
        cout << pi[i];
    }
}
