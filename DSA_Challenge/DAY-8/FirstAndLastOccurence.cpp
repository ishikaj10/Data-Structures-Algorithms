#include <iostream>
using namespace std;

int firstOccur(int arr[], int n, int key){

    int s=0, e=n-1;
    int mid= s + (e-s)/2;
    int ans= -1;

    while(s<=e){

        if(arr[mid]==key){
            ans = mid;
            e= mid-1;
        }

        else if(key> arr[mid]){
            s= mid+1;
        }

        else if(key< arr[mid]){
            e= mid-1;
        }

        mid= s + (e-s)/2;
    }
    return ans;
}

int lastOccur(int arr[], int n, int key){

    int s=0, e=n-1;
    int mid= s + (e-s)/2;
    int ans= -1;

    while(s<=e){

        if(arr[mid]==key){
            ans = mid;
            s= mid+1;
        }

        else if(key> arr[mid]){
            s= mid+1;
        }

        else if(key< arr[mid]){
            e= mid-1;
        }

        mid= s + (e-s)/2;
    }
    return ans;
}

int main(){

    int odd[6]= {1,2,3,3,5};

    cout<<"First occurence of 3 is at index "<< firstOccur(odd,5,3) << endl;

    cout<<"Last occurence of 3 is at index "<< lastOccur(odd, 5,3)<< endl;
    
    return 0;
}