//pc3656
//2024-10-01
//Simplified roman numbers.

#include <iostream>
using namespace std;

int main() {

    const int M(1000), D(500), C(100), L(50), X(10), V(5), I(1);
    int input;

    cout << "Enter decimal number" << endl;
    cin >> input;
    cout << input << " is ";

    //M
    while ((input - M) >= 0) {
        cout << 'M';
        input -= M;
    }
    //D
    while ((input - D) >= 0) {
        cout << 'D';
        input -= D;
    }
    //C
    while ((input - C) >= 0) {
        cout << 'C';
        input -= C;
    }
    //L
    while ((input - L) >= 0) {
        cout << 'L';
        input -= L;
    }
    //X
    while ((input - X) >= 0) {
        cout << 'X';
        input -= X;
    }
    //V
    while ((input - V) >= 0) {
        cout << 'V';
        input -= V;
    }
    //I
    while ((input - I) >= 0) {
        cout << 'I';
        input -= I;
    }
    cout << endl;
    
    //Exit the program.
    return 0;
}