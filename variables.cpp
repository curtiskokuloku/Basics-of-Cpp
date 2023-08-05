#include <iostream>

using namespace std;

void generate_story(int age, string name) {
    cout << "There one was a man named " << name << endl;
    cout << "He was " << age << " years old" << endl;
    cout << "He liked the name " << name << endl;
    cout << "But did not like being " << age << endl;
}

int main(){
    int age = 70;
    string name = "Tom";
    generate_story(age, name);

    int new_age = 55;
    cout << "He wants to be " << new_age << " years old"<< endl;
    return 0;
}
