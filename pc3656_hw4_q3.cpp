//pc3656
//2024-09-28
//Conversion of a number to a binary representation.

#include <iostream>
using namespace std;

int main () {
    int input_number, process_number, power_two(1), amount_bits(0);

    //Prompting the user for input.
    cout << "Enter decimal number:" << endl;
    cin >> input_number;

    //Save the value of the input number into a different variable.
    process_number = input_number;

    cout << "The binary representation of " << input_number << " is ";

    //Compute the value of the leftmost bit:
    while ((process_number / 2) > 0) {
        process_number = process_number / 2;
        power_two *= 2;
        amount_bits ++;
    }
    //Reset the variable that we use to compute the result.
    process_number = input_number;

    //Working from left to right, from the biggest power of 2.
    for (int i = amount_bits; i >= 0; i --) {
        //Raising 2 to the current power.
        int current_power(1);
        for (int j = 0; j < i; j++) {
            current_power *= 2; 
        }

        //Output 1 or 0 according to the current power of 2 subtracted from the number getting smaller.
        if ((process_number - current_power) >= 0) {
            cout << 1;
            process_number -= current_power;
        } 
        else {
            cout << 0;
        }
    }
    cout << endl;

    //Exit the program.
    return 0;
}