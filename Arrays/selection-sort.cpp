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
    for (int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, n);

    return 0;
}

int sort(int arr[], int n)
{
    for (int i = 0; i<n-1 ; i++)
    {
        for (int j = i+1 ; j<n ; j++)
        {
            if (arr[j] < arr[i])
            {
                int tem = arr[j];
                arr[j] = arr[i];
                arr[i] = tem;
            }
        }
    }
    cout << "The sorted array is: "<< endl;
    for (int i = 0; i<n ; i++)
    {
        cout << arr[i] << " ";
    }
}