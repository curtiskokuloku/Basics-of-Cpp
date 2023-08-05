#include <iostream>
#include <string>

using namespace std;

// classes are user-defined data types that encapsulate data and functions related to a particular
// entity. objects on the other hand are instances of those classes which represent real-world
// entities or concepts allow us to model and organize out code in a more structured way.
// classes can have member variables and member functions that are classified into three access
// specifiers: public, private, and protected. These access specifiers control the visibility and
// accessibility of the members within the class and its derived classes.
// - public members are accessible from outside the class and its derived classes.
// - private members are accessible only within the class itself
// Getters and setters are methods used to control the access and modification of private data
// members. They provide a way to get (retrieve) and set (modify) the values of private data members
// in a controlled manner, rather than directly accessing the data members from outside the class.

class Person{
    // Person class represents a persona with a name and age attributes.
    public:
        // constructor to initialize name and age
        Person(string name, int age): name(name), age(age) {
                                        // member initialization
            // constructor body if needed
        }

        // public member function to introduce the person
        void introduce() {
            cout << "Hi, my name is " << name << " and I am " << age << " years old." << endl;
        }

    // private member variables of Person
    private:
        string name;
        int age;
};

void personDemo() {
    // create objects of the Person class
    Person person1("Alice", 25);
    Person person2("Bob", 30);
    
    // Call the introduce() function on each object
    person1.introduce();
    person2.introduce();
}

class MyClass{
    public:
        //  public member function
        void publicMethod() {
            cout << "This is a public method." << endl;
        }
    
    private:
        // Private member function
        void privateMethod() {
            cout << "This is a private method." << endl;
        }
};

void myClassDemo() {
    MyClass obj;

    // Public member can be accessed from outside the class
    obj.publicMethod();

    // Private member cannot be accessed from outside the class (will result in an error)
    // obj.privateVar;    // Error: 'int MyClass::privateVar' is private within this context
    // obj.privateMethod(); // Error: 'void MyClass::privateMethod()' is private within this context
}

int main() {
    personDemo();
    myClassDemo();
    return 0;
}
