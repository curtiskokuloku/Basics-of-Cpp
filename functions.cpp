#include <iostream>

using namespace std;

// functions are collections of code to perform different tasks without repeating code
// functions must be declared or implemented before the main function; otherwise error
// there are different kinds of functions that do different things:
// - void: has no return value
// - int: returns 0 (success), 1 (failure), or a different value
// - bool: returns true, false
// - string: returns a string
// - char: returns a character
// any code after the 'return' keyword is not executed

void sayHi() {
    // this function prints a sentence to the user (screen)
    cout << "Hello User" << endl;
}

// functions can take in argument(s) (parameters) or not
void sayHi(string name) {
    // this function prints a sentence to the specified user
    cout << "Hello " << name << endl;
}

void addNums(int num1, int num2) {
    // this function prints the sum of two numbers
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
}

int square(int num);    // declares a function that returns the square of number 'num'

int main() {    // this a function needed to execute the program
    sayHi();

    string name = "Curtis";
    sayHi(name);

    int num1 = 4, num2 = 5;
    addNums(num1, num2);

    int num = 4;
    int sq = square(num);   // 4 * 4 = 16
    cout << "Square of " << num << " is " << sq << endl;

    return 0;
}

int square(int num) {   // implementing the square function
    return num * num;
}