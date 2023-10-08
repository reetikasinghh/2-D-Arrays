#include<iostream>
using namespace std;

int main()
{
    int mat[3][2]; // Declare a 3x2 matrix
    int i, j;

    cout << "Enter the values in the matrix:" << endl;

    // Input values into the matrix
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            cin >> mat[i][j];
        }
    }

    cout << "The given matrix is:" << endl;

    // Display the matrix
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            cout << mat[i][j] << " ";
        }
        cout << "\n"; // Move to the next row
    }

    return 0;
}

/*Output
enter the values in the matrix:
2
6
2
4
5
8
the given matrix is:
2 6
2 4
5 8
*/