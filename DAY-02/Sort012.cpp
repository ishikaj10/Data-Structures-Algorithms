#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{

    int LOW = 0, MID = 0, HIGH = n-1;
    
    while(MID <= HIGH)
    {
        if(arr[MID] == 0)
        {
            arr[MID] = arr[LOW];
            arr[LOW] = 0;
            LOW++;
            MID++;
        }
        else if (arr[MID] == 1)
        {
            MID++;
        }
        else if (arr[MID] == 2)
        {
            arr[MID] = arr[HIGH];
            arr[HIGH] = 2;
            HIGH--;
        }
    }
}