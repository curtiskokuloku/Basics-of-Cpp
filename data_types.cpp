#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char grade = 'A';               // Character data type contains a single character
    string phrase = "Curtis K";     // String data type contains many characters
    int age = 50;                   // Integer data type contains a whole number
    float pi = 3.141592653589793;   // Float data type contains floating point numbers (decimal)
    double gpa = 3.34;              // Double data type contains large numbers (decimal/floating point)
    bool isEmpty = true;           // Boolean data type is either true or false

    cout << "Character: " << grade << endl;
    cout << "String: " << phrase << endl;
    cout << "Integer: " << age << endl;
    cout << "Float: " << pi << endl;
    cout << "Double: " << gpa << endl;

    if (isEmpty == true) { 
        cout << "Boolean: " << "true" << endl;
    } else {
        cout << "Boolean: " << "false" << endl;
    }

    return 0;   // returning 0 indicated that that program executed successfully
}
