#include <iostream>

using namespace std;

// switch statements are special types of if-else statements that allows us to check one
// particular value against different values

string getDayOfWeek(int x) {
    // functions that converts a number (index) to a string representing a day in the week
    // 0 --> "Sunday"
    // 1 --> "Monday"
    // and so on.
    string dayOfWeek = "";
    switch(x) { // we are comparing x to different values (cases)
        case 0:
            dayOfWeek = "Sunday";
            break;  // breaks us out of this case so that we don't check the other cases
        case 1:
            dayOfWeek = "Monday";
            break;
        case 2:
            dayOfWeek = "Tuesday";
            break;
        case 3:
            dayOfWeek = "Wednesday";
            break;
        case 4:
            dayOfWeek = "Thursday";
            break;
        case 5:
            dayOfWeek = "Friday";
            break;
        case 6:
            dayOfWeek = "Saturday";
            break;
        default:                    // this is only reached if none of the above cases are true
            dayOfWeek = "Invalid value";
            break;
    }
    return dayOfWeek;
}

int main() {
    int x;
    cout << "Enter a number between 0 and 6 (inclusive): ";
    cin >> x;
    string day = getDayOfWeek(x);
    cout << x << " --> " << day << endl;
    
    return 0;
}