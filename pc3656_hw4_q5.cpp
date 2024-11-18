//pc3656
//2024-09-28

#include <iostream>
using namespace std;

int main () {
    int n;

    //Prompt the user for input
    cout << "Please enter a positive integer: ";
    cin >> n;

    //Top part of the hourglass.
    for (int i = n - 1; i >= 0; i --) {
        for (int s = 1; s < (n - i); s ++) {
            cout << " ";
        }
        for (int j = 0; j < (i*2) + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    //Bottom part of the hourglass.
    for (int i = 0; i < n; i ++) {
        for (int s = 1; s < (n - i); s ++) {
            cout << " ";
        }
        for (int j = 0; j < (i*2) + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    //Exit the program.
    return 0;
}