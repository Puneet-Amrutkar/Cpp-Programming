#include <iostream>

using namespace std;  

int main()
{
    int m, a[100];
    cout << "Enter the number of elements in first array" << endl;
    cin >> m;

    cout << "Enter the elements of the first array" << endl;
    for (int i = 0 ; i<m ; i++)
    {
        cin >> a[i];
    }

    int k = 0;

    // Traverse the array. If element is non-zero, move it to j-th position
    for (int i = 0 ; i<m ; i++)
    {
        if (a[i]!=0)
        {
            a[k++] = a[i];
        }
    }

    // Fill remaining positions with zeroes
    while (k<m)
    {
        a[k++] = 0;
    }
    cout << "The required array: " << endl;
    for (int i = 0 ; i<m ; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
