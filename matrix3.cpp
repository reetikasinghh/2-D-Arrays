
#include<iostream>
using namespace std;
int main(){
{
    int a[3][3], b[3][3], mult[3][3], r1, c1, r2, c2, i, j, k;

    cout << "Enter rows and columns for first matrix: "<<" ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: "<<" ";
    cin >> r2 >> c2;
    while (c1!=r2)
    {
        cout << "Error! column of first matrix not equal to row of second."<<" ";

        cout << "Enter rows and columns for first matrix:"<<" ";
        cin >> r1 >> c1;

        cout << "Enter rows and columns for second matrix:"<<" ";
        cin >> r2 >> c2;
    }
    cout << endl << "Enter elements of matrix 1:" <<" ";

    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }
    cout << endl << "Enter elements of matrix 2:" << " ";
    for(i = 0; i < r2; ++i)
        for(j = 0; j < c2; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
        {
            mult[i][j]=0;
        }
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
            for(k = 0; k < c1; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }
    cout << endl << "Output Matrix: " << " ";
    for(i = 0; i < r1; ++i)
    for(j = 0; j < c2; ++j)
    {
        cout << " " << mult[i][j];
        if(j == c2-1)
            cout <<" ";
    }

    return 0;
}

} 
/*Output 
Enter rows and columns for first matrix:  2
2
Enter rows and columns for second matrix:  2
2

Enter elements of matrix 1: Enter element a11 : 1
Enter element a12 : 1
Enter element a21 : 1
Enter element a22 : 1

Enter elements of matrix 2: Enter element b11 : 1
Enter element b12 : 1
Enter element b21 : 1
Enter element b22 : 1

Output Matrix:   2 2  2 2
*/
