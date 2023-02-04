// nCr= n! / ( (n-r)! * r! )

#include <iostream>
using namespace std;

int fact(int n){

    int factorial=1;
    for(int i=2; i<=n; i++){
        factorial*=i;
    }
return factorial;
}

int main(){

    int n,r;
    cin>>n>>r;

    int answer= fact(n)/(fact(r)*fact(n-r));
    cout<<answer<<endl;

    return 0;

}