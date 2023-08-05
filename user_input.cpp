#include <iostream>

using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old" << endl;
    
    char middle;
    cout << "What is your middle initial? ";
    cin >> middle;
    cout << "Your middle initial is " << middle << endl;

    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "The sum of the two numbers is " << num1 + num2 << endl;

    string name;
    cin.ignore(); // Ignore the newline character left in the input buffer after reading num2
    cout << "Enter your name: ";
    getline(cin, name); // use getline() function instead of cin for string
    cout << "Hello, " << name << endl;

    return 0;
}
