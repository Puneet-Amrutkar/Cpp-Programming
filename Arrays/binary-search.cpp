#include <iostream>

using namespace std;

int binary(int arr[], int n, int key);

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

    if (binary(arr, n, key) == -1)
    {
        cout << "Number not present" << endl;
    }
    else
    {
        cout << "Number present at index ";
        cout << binary(arr, n, key);
    }

    return 0;
}

int binary(int arr[], int n, int key)
{
    int start = 0;
    int end = n;
    
    while (start < end)
    {
        int mid = (start + end)/2;
        if (mid == key)
        {
            return mid;
        }

        else if (arr[mid] > key)
        end = mid - 1;

        else
        start = mid + 1;
    }
}