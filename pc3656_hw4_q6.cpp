//pc3656
//2024-10-01

#include <iostream>
using namespace std;

int main () {
    int n;
    //Prompt the user for inputs
    cout << "Please enter a positive integer: ";
    cin >> n;

    //Iterate over every number between 1 and n.
    for(int x = 1; x <= n; x ++) {
        //Store the current x value in another variable and initialize some local variables.
        int process(x), amount_digits(0), power_ten(1), even_digits(0);
        while ((process / 10) > 0) {
            //Count the amount of powers of 10 needed to represent the current number.
            process = process / 10;
            power_ten *= 10;
            amount_digits ++;
        }

        //Reset the number being processed to x
        process = x;

        for (int i = amount_digits; i >= 0; i--) {
            //Initialize then compute the current power of ten.
            int current_power(1);
            for (int j = 0; j < i; j++) {
                current_power *= 10; 
            }
            if ((process / current_power) % 2 == 0) {
                even_digits ++;
            }    
            process -= (process / current_power) * current_power;
        }
        //If we have more even digits than odd digits, output X.
        if (even_digits > (amount_digits + 1 - even_digits)) {
            cout << x << endl;
        }
    }

    // Exit the program.
    return 0;
}