#include <iostream>

using namespace std;

int main() {
    int matrix1Rows, matrix1Cols, matrix2Rows, matrix2Cols;

    // Get the dimensions of matrix1
    cout << "Enter the number of rows and columns for matrix1: ";
    cin >> matrix1Rows >> matrix1Cols;

    // Get the dimensions of matrix2
    cout << "Enter the number of rows and columns for matrix2: ";
    cin >> matrix2Rows >> matrix2Cols;

    // Check if matrix multiplication is possible
    if (matrix1Cols != matrix2Rows) {
        cout << "Matrix multiplication is not possible. Columns of matrix1 must be equal to rows of matrix2." << endl;
        return 1; // Exit with an error code
    }

    // Declare matrices
    int matrix1[matrix1Rows][matrix1Cols];
    int matrix2[matrix2Rows][matrix2Cols];
    int resultMatrix[matrix1Rows][matrix2Cols];

    // Input elements of matrix1
    cout << "Enter elements of matrix1:" << endl;
    for (int i = 0; i < matrix1Rows; i++) {
        for (int j = 0; j < matrix1Cols; j++) {
            cin >> matrix1[i][j];
        }
    }

    // Input elements of matrix2
    cout << "Enter elements of matrix2:" << endl;
    for (int i = 0; i < matrix2Rows; i++) {
        for (int j = 0; j < matrix2Cols; j++) {
            cin >> matrix2[i][j];
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < matrix1Rows; i++) {
        for (int j = 0; j < matrix2Cols; j++) {
            resultMatrix[i][j] = 0;
            for (int k = 0; k < matrix1Cols; k++) {
                resultMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the resultMatrix
    cout << "Result of matrix multiplication:" << endl;
    for (int i = 0; i < matrix1Rows; i++) {
        for (int j = 0; j < matrix2Cols; j++) {
            cout << resultMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
/*Output
Enter the number of rows and columns for matrix1: 2
2
Enter the number of rows and columns for matrix2: 2
2
Enter elements of matrix1:
2
1
2
2
Enter elements of matrix2:
2
3
1
1
Result of matrix multiplication:
5 7
6 8
*/
