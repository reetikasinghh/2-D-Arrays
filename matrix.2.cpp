/*WAP TO PERFORM THE ADDITION OF MATRIX*/
#include<iostream>
using namespace std;
int main()
{
    int r, c, a[3][3], b[3][3], sum[3][3], k, l;

    cout << "Enter number of rows: ";
    cin >> r;

    cout << "Enter number of columns: ";
    cin >> c;

    cout << endl<< "Enter elements of 1st matrix: " << endl;
    for(k = 0; k < r; ++k)
       for(l = 0; l < c; ++l)
       {
           cout << "Enter element a" << k + 1 << l + 1 << " : ";
           cin >> a[k][l];
       }
    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for(k = 0; k < r; ++k)
       for(l = 0; l < c; ++l)
       {
           cout << "Enter element b" << k + 1 << l + 1 << " : ";
           cin >> b[k][l];
       }
    for(k = 0; k < r; ++k)
        for(l = 0; l < c; ++l)
            sum[k][l] = a[k][l] + b[k][l];
    cout << endl << "Sum of two matrix is: " << endl;
    for(k = 0; k < r; ++k)
        for(l = 0; l < c; ++l)
        {
            cout << sum[k][l] << "  ";
            if(l == c - 1)
                cout << endl;
        }

    return 0;
}
/*Output
Enter elements of 1st matrix:
Enter element a11 : 11
Enter element a12 : 12
Enter element a21 : 4
Enter element a22 : 5

Enter elements of 2nd matrix:
Enter element b11 : 5
Enter element b12 : 5
Enter element b21 : 6
Enter element b22 : 7

Sum of two matrix is:
16  17
10  12
*/
