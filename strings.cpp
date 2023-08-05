#include <iostream>

using namespace std;

int main() {
    cout << "Curtis K" << endl;             // endl indicates a new line
    cout << "Hello\n";                      // can also use '\n'

    string phrase = "This is a string";     // string variable
    cout << phrase << endl;

    int length = phrase.length();           // using the length() function
    cout << "Length of string: " << length << endl;

    char c = phrase[0];                     // get individual character
    cout << "First character: " << c << endl;

    c = phrase[0] = 'P';                    // changing a character in the string
    cout << "First character is now: " << c << endl;
    cout << "String: " << phrase << endl;

    // we can find the index of the first occurrence of a character, or string using find() function;
    // starting at a valid index, i.e., 0
    int i = phrase.find('a', 0);
    cout << "'a' is at index: " << i << endl;

    i = phrase.find("string", 0);
    cout << "\"string\" is at index: " << i << endl;

    // we can take parts of the string using substr() function;
    // function takes a starting index and the length (how long) the substring will be
    string substr = phrase.substr(5, 4);
    cout << "Substring starting at index 5: " << substr << endl;
    cout << "Length of substring: " << substr.length() << endl;

    return 0;
}
