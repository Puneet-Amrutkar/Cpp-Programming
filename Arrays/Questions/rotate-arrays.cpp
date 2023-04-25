#include <iostream>

using namespace std;  

void rotate (int a[], int n, int k)
{
    int temp[100];

    // We then create a temporary array temp to store the last k elements of arr. We do this by iterating over the last k elements of arr and storing them in temp.
    for (int i = 0 ; i<k ; i++)
    {
        temp[i] = a[n-k+i];
    }

    // Next, we shift the first n-k elements of arr to the right by k steps. We do this by starting at n-k-1 and copying each element to its new position i+k.
    for (int i = n-k-1 ; i>=0 ; i--)
    {
        a[i+k] = a[i];
    }

    // we copy the elements from temp back into the first k positions of arr.
    for (int i = 0 ; i<k ; i++)
    {
        a[i] = temp[i];
    }
}

int main()
{
    int n, a[100], k, temp = 0;
    cout << "Enter the number of elements in first array" << endl;
    cin >> n;

    cout << "Enter the elements of the first array" << endl;
    for (int i = 0 ; i<n ; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the number of steps to which array is to be rotated" << endl;
    cin >> k;

    cout << "Original Array: ";
    for (int i = 0; i<n ; i++) 
    {
        cout << a[i] << " ";
    }

    cout << endl;

    rotate(a, k, n);

    cout << "Rotated Array: ";
    for (int i = 0 ; i<n ; i++) 
    {
        cout << a[i] << " ";
    }

    return 0;
}