#include <iostream>

using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int luckyNums[] = {4, 8, 15, 16, 23, 42};
    // arrays have size in bytes; elements of the array also have size in bytes
    // i.e., integers have size of 4 bytes, floats 4 bytes, double 8 bytes, and so on
    // use sizeof() to determine the size (in bytes) of the data
    int size = sizeof(luckyNums) / sizeof(luckyNums[0]);
    cout << "Array size: " << size << endl;
    cout << "Array elements: ";
    printArray(luckyNums, size);
    int first_element = luckyNums[0];
    cout << "First element: " << first_element << endl;

    return 0;
}