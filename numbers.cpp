#include <iostream>
#include <cmath>    // indicated we will be using math functions from the standard library

using namespace std;

int main(){
    // we can store whole numbers as integers, and decimal numbers as floats or double
    // doubles allows us to store more specific decimal points than floats
    // a number can be constants, i.e., '40', or stored in variables, i.e., 'int val = 40'

    cout << 5 * 7 << endl;      // 35
    cout << 101 % 10 << endl;   // gives us the remainder of the first number (101 mod 10 = 1)

    int w_num = 5;
    double d_num = 5.5;

    w_num++;                    // increment w_num (adds 1)
    cout << w_num << endl;

    d_num--;                    // decrement d_num (subtracts 1)
    cout << d_num << endl;

    cout << w_num + d_num << endl;  // adding a whole number to a decimal number results in a decimal number

    cout << 10 / 3 << endl;     // division with two integers results in a whole number

    int power = pow(2, 5);      // 2^5 = 32
    cout << power << endl;

    double sq = sqrt(36);       // √36 = 6
    cout << sq << endl;

    int rounded = round(4.6);   // rounds down or up to whole number
    cout << rounded << endl;

    int max = fmax(44, 3);      // finds the maximum between two numbers; fmin() finds the minimum
    cout << max << endl;

    return 0;
}
