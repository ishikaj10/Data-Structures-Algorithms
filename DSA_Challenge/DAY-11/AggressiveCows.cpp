#include <bits/stdc++.h>
using namespace std;
 
// Function to check whether a distance is
// keeping all the cows in the barn
bool ok(vector<int>& v, int x, int c)
{
    int n = v.size();
    int count = 1;
    int d = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] - d >= x) {
            d = v[i];
            count++;
        }
        else {
            continue;
        }
    }
    if (count >= c) {
        return true;
    }
    return false;
}
 
// Function to find the maximum possible
// minimum distance between two cows
int aggressive_cows(vector<int>& v, int n, int k)
{
    long long ans = -1;
    int maxi = 0;
    for (int i = 0; i < n; i++) {
        maxi = max(maxi, v[i]);
    }
 
    // Loop from 1 to max limit of the
    // barn length (here = 10^9)
    for (long long i = 1; i <= maxi; i++) {
        if (ok(v, i, k)) {
            ans = i;
        }
        else {
            break;
        }
    }
 
    return ans;
}
 
// Driver code
int main()
{
    int K = 3;
    vector<int> arr = { 1, 2, 4, 8, 9 };
    int N = arr.size();
 
    // Function call
    int ans = aggressive_cows(arr, N, K);
    cout << ans << endl;
 
    return 0;
}