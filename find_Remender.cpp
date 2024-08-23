#include<iostream>
using namespace std;
int main(){
    int a = 16; // a mean divident
    int b = 3;  //b is divisor
    int q = a/b;  // q is quotient
    int r; //r is remainder
    //  formula remenders
    //  a = (b*q) + r
    r = a - (b*q);
    cout<<r;
}