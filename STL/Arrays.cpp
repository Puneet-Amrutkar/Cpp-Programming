#include <iostream>
#include <array>

using namespace std;

int stl_array()
{
    array<int,4> a = {1, 2, 3, 4};
    int s = a.size();
    for (int i = 0 ; i<s ; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Element at second position: " << a.at(2) << endl;

    cout << "Empty or not: " << a.empty() << endl;
    
    cout << "First element: " << a.front() << endl;

    cout << "Last element: " << a.back() << endl;
}

int main()
{
    cout << stl_array() << endl;

    return 0;
}
