#include <algorithm>
#include <iostream>
using namespace std;
 
int main()
{
    int arr[] = { 1, 45, 54, 71, 76, 12 };
 
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
 
    // Reverse the array
    reverse(arr, arr + n);
 
    // Print the reversed array
    cout << "\nReversed Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}