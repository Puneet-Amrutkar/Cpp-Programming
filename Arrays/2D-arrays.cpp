//syntax for declaring a two dimentional array.

#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cout << "Enter the number of rows and columns" << endl;
    cin >> n;
    cin >> m;
    int arr[100][100];
    for (int i = 0 ; i<n ; i++)
    {
        for (int j = 0 ; j<m ; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "The matrix is: \n"; 
    for (int i = 0 ; i<n ; i++)
    {
        for (int j = 0 ; j<m ; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}