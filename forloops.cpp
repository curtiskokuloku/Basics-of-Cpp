#include <iostream>

using namespace std;

// for loops allow us to execute a block of code repeatedly fro a fixed number of times
// or over a specific range of values.
// helps us tp automate repetitive tasks adn iterate over data structures like arrays
// for (initialization; condition; update) {
//      Code to be executed repeatedly
// }

void count() {
    // prints the numbers from 1 to 5
    cout << "Output: ";
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;
}

void print(int array[], int n) {
    // prints the elements of the array
    for (int i = 0; i < n; i++) {
        cout << "array[" << i << "]: " << array[i] << endl;
    }
}

void display(int array[], int n) {
    cout << "array: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void square(int array[], int n) {
    // print the square values of the elements of the array
    for (int i = 0; i < n; i++) {
        array[i] = array[i] * array[i];
    }
}

int power(int base, int pow) {
    int result = 1;
    for (int i = 0; i < pow; i++) {
        result *= base;
    }
    return result;
}

int main() {
    // count();    // Output: 1 2 3 4 5
    int array[] = {1, 3, 5, 7, 9};
    int size = sizeof(array) / sizeof(array[0]);
    // print(array, size);
    display(array, size);   // array: 1 3 5 7 9
    square(array, size);
    display(array, size);   // array: 1 9 25 49 81

    cout << "4^2: " << power(4, 2) << endl; // 16
    cout << "8^4: " << power(8, 4) << endl; // 4096
    return 0;
}