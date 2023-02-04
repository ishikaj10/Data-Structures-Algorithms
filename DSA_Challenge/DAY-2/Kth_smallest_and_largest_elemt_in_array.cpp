#include<bits/stdc++.h>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{

	vector<int> ans;

    sort(arr.begin(),arr.end());
    
	int a=arr[k-1];
    int b=arr[n-k];
    
	ans.push_back(a);
    ans.push_back(b);
    
	return ans;
}