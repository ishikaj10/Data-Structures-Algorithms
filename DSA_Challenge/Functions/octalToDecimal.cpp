// 17= 8^0*7 + 8^1*1= 15

#include <iostream>
using namespace std;

int octalToDecimal(int n){ 

    int ans=0;
    int x =1;   //power of 2
    while (n>0)
    {
        int lastdigit= n%10;
        ans= ans+x*lastdigit;
        x=x*8;
        n=n/10;
    }
    return ans;

}

int main(){

    int n;
    cin>>n;

    cout<<octalToDecimal(n)<<endl;

    return 0;
}

