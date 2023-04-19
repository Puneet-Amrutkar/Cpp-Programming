#include <iostream>

using namespace std; 

int linear(int arr[], int n, int key);

int main()
{
    cout << "Enter the size of an array" << endl;
    int n;
    cin >> n;
    
    int arr[100];
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i<n ; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key to be searched" << endl;
    cin >> key;

    if (linear(arr, n, key) == -1)
    {
        cout << "Number not present" << endl;
    }
    else
    {
        cout << "Number present at index ";
        cout << linear(arr, n, key);
    }

    return 0;
}

int linear(int arr[], int n, int key)
{
    for (int i = 0; i<n ; i++)
    {
        if (arr[i] == key)
        return i;
    }
    return -1;
}