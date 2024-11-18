//pc3656
//2024-09-28

#include <iostream>
using namespace std;

int main() {
    int n;
    int counter(0);

    //Section A.
    //using a while loop
    cout << "section a" << endl; 
    //Prompting the user for input.
    cout << "Please enter a positive integer: ";
    cin >> n;
    while(counter != n) {
        counter ++;
        cout << counter * 2  << endl;
    }

    //Section B.
    //Using a for loop
    cout << "section b" << endl;
    //Prompting the user for input.
    cout << "Please enter a positive integer: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cout << i * 2 << endl;
    }

    //Exit the program.
    return 0;
}