#include <iostream>
using namespace std;

int getMax(int num[], int n){

    int maxi= INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi= max(maxi, num[i]); //predefined function
        //without predefined function 
        // if(num[i]> max){
        //     max= num[i];
        // }
    }
// returning max value
return maxi;

}

int getMin(int num[], int n){

    int mini= INT16_MAX;
    for (int i = 0; i < n; i++)
    {
        mini= min(mini, num[i]); //predefined function
        //without predefined function
        // if(num[i]< min){
        //     min= num[i];
        // }
    }
// returning max value
return mini;

}

int main(){

    int size;
    cin>> size;
    int num[100];

// taking input in array
for (int i = 0; i < size; i++)
{
    cin>> num[i];
}

cout<< "Maximum value is= "<< getMax(num, size)<< endl;
cout<< "Minimum value is= "<< getMin(num, size)<< endl;
       

}