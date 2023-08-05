#include <iostream>

using namespace std;

// while loops allow us to loop through a block of code while a certain condition is true.
// we can specify the condition in the parentheses, and the code within the loop will be executed
// until the condition is false. The condition is checked after each iteration.
// an infinite loop is when the condition never becomes false and the loop is executed indefinitely 

void printIndex() {
    int index = 1;
    while (index <= 5) {    // print the value of index 5 times
        cout << "index: " << index << endl;
        index++;
    }
}

// another form of while loops is a do-while loop which first executes the code and then 
// check the condition.

void printIndex2() {
    int index = 6;
    do {
        cout << "index: " << index << endl;     // index: 6 will be printed first
        index++;
    } while (index <= 5);                       // condition is checked after
}

void guessNum(int secretNum) {
    // a function that implements a guessing game that depends on the input of the user
    int guess = 0;
    int count = 0, limit = 3;
    bool outOfGuesses = false;

    while (secretNum != guess && !outOfGuesses) {
        if (count < limit) {
            cout << "Enter a guess: ";
            cin >> guess;
            count++;

            if (guess < secretNum) {
                cout << "Too low. ";
            } else if (guess == secretNum) {
                cout << "Congratulations!! You guessed right!!" << endl;
            }else {
                cout << "Too high. ";
            }
        } else {
            outOfGuesses = true;
            cout << "You are out of guesses!" << endl;
        }
    }
}

int main() {
    // printIndex();
    // printIndex2();
    int secretNum = 7;
    guessNum(secretNum);
    return 0;
}