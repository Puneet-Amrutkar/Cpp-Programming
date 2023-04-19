#include <iostream>

using namespace std; 

int sort(int arr[], int n);

int main()
{
    cout << "Enter the size of an array" << endl;
    int n;
    cin >> n;
    
    int arr[100];
    cout << "Enter the elements of the array" << endl;
    for (int i = 0 ; i<n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, n);

    return 0;
}

int sort(int arr[], int n)
{
    int k = 1;
    while (k<n)
    {
        for (int i = 0 ; i<n-k ; i++)
        {
            if (arr[i] > arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        k++;
    }
    
    cout << "The sorted array is: "<< endl;
    for (int i = 0 ; i<n ; i++)
    {
        cout << arr[i] << " ";
    }
}