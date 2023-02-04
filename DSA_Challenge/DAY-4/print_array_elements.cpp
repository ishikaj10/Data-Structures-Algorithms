#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    
    cout<< "Printing the array!"<<endl;

    for(int i=0; i<size; i++){
        cout<< arr[i] <<" ";
    }
    cout<< "\nPrinting done!\n"<<endl;
}

int main(){

    int first[3]= {3,5,7};
    printArray(first, 3);

    int second[15]= {2,7};
    printArray(second, 15);

    int third[10]= {0};
    printArray(third, 10);

    int fourth[10]= {1};
    printArray(fourth, 10);

    int fifth[10];
    int n=10;
    int val=1;
    cout<< "Printing the array with all values same" << endl;
    
    for(int i=0; i<n; i++){
        third[i]= val;
        cout<< third[i];
    }
    cout<< "\nPrinting done!\n"<<endl;

    int fifthsize= sizeof(fifth)/sizeof(int);
    cout<< "Size of fifth is= " << fifthsize <<endl;

}