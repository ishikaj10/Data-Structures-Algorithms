#include <bits/stdc++.h> 

int firstOccur(vector<int>&arr, int n, int k){

    int s=0, e=n-1;
    int mid= s + (e-s)/2;
    int ans= -1;

    while(s<=e){

        if(arr[mid]==k){
            ans = mid;
            e= mid-1;
        }

        else if(k> arr[mid]){
            s= mid+1;
        }

        else if(k< arr[mid]){
            e= mid-1;
        }

        mid= s + (e-s)/2;
    }
    return ans;
}

int lastOccur(vector<int>&arr, int n, int k){

    int s=0, e=n-1;
    int mid= s + (e-s)/2;
    int ans= -1;

    while(s<=e){

        if(arr[mid]==k){
            ans = mid;
            s= mid+1;
        }

        else if(k> arr[mid]){
            s= mid+1;
        }

        else if(k< arr[mid]){
            e= mid-1;
        }

        mid= s + (e-s)/2;
    }
    return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int>p;
    p.first= firstOccur(arr, n, k);
    p.second= lastOccur(arr, n, k);

    return p;
}