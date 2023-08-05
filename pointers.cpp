#include <iostream>

using namespace std;

// pointers are variables that store memory addresses of other variables.
// they allow us to indirectly access and modify the values stored at a particular
// memory location.
// we can declare pointers as such:
//      int *ptr;   // Declares a pointer to an integer
//      double *ptr2; // Declares a pointer to a double
// pointers can be initialized to pointer to a valid memory location; uninitialized pointers
// can lead to undefined behaviour. we can initialize pointers as such using the address-of 
// operator (&):
//      int x = 10;
//      int *ptr = &x; // ptr now points to the memory address of variable x
// To access the value stored at teh memory location pointer to by a pointer, we can dereference it
// using the dereference operator (*):
//      int x = 10;
//      int *ptr = &x;
//      int value = *ptr;
//      cout << "Value of x: " << value << endl; // Output: 10
// pointers can be used to pass arguments to functions by reference, allowing the function to modify
// the original data.
// pointers allow us to dynamically allocate memory for variables at runtime using operators like
// 'new', and 'delete' to deallocate memory.
// pointers also support arithmetic operations like addition and subtraction to move to the next
// memory based on the size of the data type it points to, as such:
//      int arr[5] = {1, 2, 3, 4, 5};
//      int *ptr = arr; // ptr points to the first element of the array
//      ptr++; // Now ptr points to the second element of the array

void pointerDemo() {
    int x = 10;
    int *ptr = &x;
    int value = *ptr;
    cout << "Memory location of ptr: " << ptr << endl;
    cout << "Value of x: " << value << endl; // Output: 10

    int y = 15;
    x = y;
    ptr = &x;
    value = *ptr;
    cout << "Memory location of ptr: " << ptr << endl;
    cout << "Value of x is now: " << value << endl; // Output: 10
}

void swap(int *ptr1, int *ptr2) {
    // function that swaps the value of two variables using pointers
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void swapDemo() {
    int x = 5, y = 10;
    cout << "Before swapping: x = " << x << ", y = " << y << endl;

    int *ptr1 = &x;
    int *ptr2 = &y;

    cout << "Memory location of ptr1: " << ptr1 << endl;
    cout << "Memory location of ptr2: " << ptr2 << endl;

    // pass pointers to the swap function
    swap(ptr1, ptr2);

    cout << "After swapping: x = " << x << ", y = " << y << endl;
    cout << "Memory location of ptr1: " << ptr1 << endl;
    cout << "Memory location of ptr2: " << ptr2 << endl;
}

void modifyArray(int *ptr, int size) {
    // add 10 to each element of the array using pointers
    for (int i = 0; i < size; i++) {
        *(ptr + i) += 10;
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << std::endl;
}

void modifyArrayDemo() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    cout << "Original array: ";
    printArray(array, size);
    cout << "Memory location of array: " << array << endl;

    // pass the array and its size to the modifyArray function
    modifyArray(array, size);

    cout << "Modified array: ";
    printArray(array, size);
}

int main() {
    // pointerDemo();
    // swapDemo();
    modifyArrayDemo();
    return 0;
}