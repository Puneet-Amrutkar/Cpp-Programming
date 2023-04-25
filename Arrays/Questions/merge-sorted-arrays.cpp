#include <iostream>

using namespace std;  

int main()
{
    int m, n, a[100], b[100], c[100];
    cout << "Enter the number of elements in first array" << endl;
    cin >> m;
    cout << "Enter the number of elements in second array" << endl;
    cin >> n;

    cout << "Enter the elements of the first array" << endl;
    for (int i = 0 ; i<m ; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the elements of the second array" << endl;
    for (int j = 0 ; j<n ; j++)
    {
        cin >> b[j];
    }
    
    //merging the two arrays in c and sorting simultaeneously
    int i = 0, j = 0, k = 0;
    while (i<m && j<n)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else
        {
            c[k] = b[j];
            j++;
            k++;
        } 
    }

    for (int i = 0 ; i<(n+m) ; i++)
    {
        cout << c[i] << " ";
    }
    
    return 0;
}