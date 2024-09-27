#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the Two Numbers :  ";
    cin>>a>>b;
    // int temp =a;

    // a=b;
    // b=temp;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<"  "<<b;

}