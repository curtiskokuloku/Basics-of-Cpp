#include <iostream>

using namespace std;

void isMaleAndTall() {
    // function to determine if a person is a male and is tall
    bool isMale = false;
    bool isTall = true;
    if (isMale && isTall) {
        // checks if both isMale and isTall are true
        cout << "You are a male and is tall" << endl;
    } else if (isMale && !isTall) {
        // checks if isMale is true and isTall is not true
        cout << "You are a male but not tall" << endl;
    } else if (!isMale && isTall) {
        // checks if isMale is not true but isTall is true
        cout << "You are not a male but is tall" << endl;
    } else {
        // otherwise they are both false
        cout << "You are not a male and is not tall" << endl;
    }
}

int getMax(int num1, int num2) {
    // function to determine the maximum between two numbers using if-else statements
    int max = 0;
    if (num1 > num2) {
        max = num1;
    } else {
        max = num2;
    }
    cout << "The maximum between " << num1 << " and " << num2 << " is ";
    return max;
}

int getMax3(int num1, int num2, int num3) {
    // function to determine the maximum between three numbers using if-else statements
    int max = 0;
    if (num1 >= num2 && num1 >= num3) {
        max = num1;
    } else if(num2 >= num1 && num2 >= num3) {
        max = num2;
    } else {
        max = num3;
    }
    cout << "The maximum between " << num1 << ", " << num2 << " and " << num3 << " is ";
    return max;
}

int main() {
    isMaleAndTall();
    cout << getMax(2, 5) << endl;
    cout << getMax3(5, 9, 8) << endl;
    return 0;
}