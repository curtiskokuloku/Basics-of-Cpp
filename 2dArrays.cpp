#include <iostream>

using namespace std;

// two-dimensional arrays is basically an array of arrays; it is a data structure that allows you
// to store values in a grid or matrix format, where each element is uniquely identified by two indices:
// row and column. Each element in the grid or matrix can be accessed as such: array[row][column]
// to declare and initialize a 2d array, we use:
// dataType arrayName[rows][columns] = { {value00, value01, ...},
//                                       {value10, value11, ...},
//                                                         ... };
// we can use nested loops to iterate through the elements of a 2d array:
// for (int i = 0; i < rows; i++) {
//  for (int j = 0; j < columns; j++) {
//      Access and process myArray[i][j]
//      }
// }

int main() {
    int matrix[3][3] = {
                        {1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}
                    };

    cout << "Element at row 2, column 1: " << matrix[1][0] << endl;

    int rows = sizeof(matrix) / sizeof(matrix[0]);
    int cols = sizeof(matrix[0]) / sizeof(matrix[0][0]);
    int size = rows * cols;
    
    cout << "rows: " << rows << endl;
    cout << "columns: " << cols << endl;
    cout << "size: " << size << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}