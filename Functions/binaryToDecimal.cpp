// 101= 2^0*1 + 2^1*0 + 2^2*1= 5

#include <iostream>
using namespace std;

int binaryToDecimal(int n){ 

    int ans=0;
    int x =1;   //power of 2
    while (n>0)
    {
        int lastdigit= n%10;
        ans= ans+x*lastdigit;
        x=x*2;
        n=n/10;
    }
    return ans;

}

int main(){

    int n;
    cin>>n;

    cout<<binaryToDecimal(n)<<endl;

    return 0;
}

// I-lastdigit= 101%10 = 1
//   ans= 0+ 1*1= 1
//   x=1*2= 2
//   n=101/10= 10(integer part)

// II-lastdigit= 10%10 =0
//    ans= 1+2*0= 1
//    x=2*2= 4
//    n=10/10=1

// III-lastdigit= 1%10 =1
//     ans= 1+4*1= 5 