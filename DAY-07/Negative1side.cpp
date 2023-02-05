#include <iostream>
using namespace std;
 
void shiftnegative(int arr[], int left,
              int right)
{

  while (left<=right)
  {
    
    if (arr[left] < 0 && arr[right] < 0)
      left++;
 
    else if (arr[left]>0 && arr[right]<0)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

    else if (arr[left]>0 && arr[right] >0)
      right--;
    else{
      left++;
      right--;
    }
  }
}
 
// Function to print the array
void display(int arr[], int right){

  for (int i=0;i<=right;++i){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
 
int main()
{
  int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, 11};

  int arr_size = sizeof(arr) / sizeof(arr[0]);
   
  shiftnegative(arr,0,arr_size-1);
  display(arr,arr_size-1);
  return 0;
}