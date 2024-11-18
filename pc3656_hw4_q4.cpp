//pc3656
//2024-10-02
//Compute the geometric mean of a sequence.

#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int s_length;
    double mean(0);

    //Section A.
    cout << "section a" << endl; 
    //Prompting the user for input
    cout << "Please enter the length of the sequence: ";
    cin >> s_length;
    if(s_length > 0) {
        cout << "Please enter your sequence:" << endl;
        //initialize mean
        cin >> mean;
    }
    //Keep prompting and updating mean until the end of the sequence.
    for (int i = 1; i < s_length; i++) {
        int n(0);
        cin >> n;
        mean *= n;
    }
    //Compute and output the result.
    mean = pow(mean, 1 / double(s_length));
    cout << "The geometric mean is: " << mean << endl;

    //Section B.
    cout << "section b" << endl;
    //Reset mean and sequence length.
    s_length = 0;
    mean = 0; 
    bool empty_sequence = false;
    int n(0);
    //Prompting the user for inputs.
    cout << "Please enter a non-empty sequence of positive integers, each one in a separate line. End your sequence by typing -1:" << endl;
    //Iterating until the user enters -1
    while (n != -1) {
        cin >> n;
        if(n != -1) {
            //Check that the user enters has entered at least one integer that is not -1.
            if (empty_sequence == false) {
                empty_sequence = true;
                //Initialize the mean
                mean = 1;
            }
            mean *= n;
            s_length ++;
        }
    }
    //Compute and output the result
    mean = pow(mean, 1 / (double)s_length);
    cout << "The geometric mean is: " << mean << endl;

    //Exit the program.
    return 0;
}