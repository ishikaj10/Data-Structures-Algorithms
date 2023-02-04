#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

bool isprime=0;
    
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            cout<<n<<" is a non-prime or a composite no."<<endl;
            isprime=1;
            break;
        }
    }
    if(isprime==0){
        cout<<n<<" is a prime no.";
    }

    return 0;
}