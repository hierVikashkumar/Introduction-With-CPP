#include<iostream>
using namespace std;
int main(){
    float x;
    cin>>x; // -1.3
    int y = (int)x; //y = -1
    if (y<0) y = y-1;
    float z = (float)y; //z = 9
    x  = x - z;
    cout<<x;
}