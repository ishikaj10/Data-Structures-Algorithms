#include <iostream>
using namespace std;
int findIndex(int arr[], int idx, int K)
{
     
    // Traversing the array from
    // last position
    for (int i = idx; i >= 0; i--) {
        if (arr[i] == K)
            return i;
    }
    return -1;
}
 
// Driver Code
int main()
{
 
    int arr[] = { 3, 1, 4, 4, 2, 3, 1 };
    int N = sizeof(arr) / sizeof(arr[0]);
    int K = 4;
 
    // Function call
    cout << findIndex(arr, N - 1, K);
    return 0;
}