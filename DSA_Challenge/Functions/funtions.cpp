/*syntax of functions
returnType functionName(parameter1, parameter2,...){
    function body
}
you have to call a function in any other function or in a main function
ex- function to add two numbers 
*/
#include<iostream>
using namespace std;

int add(int num1, int num2){
    int sum= num1 + num2;
    return sum;
}
int main(){
    int a;
    int b;
    cin>>a>>b;
    cout<<add(a,b)<<endl;
    return 0;
}
