#include<iostream>
using namespace std;
int main(){
    int x,y;
// int x=6;
// int y=5;
int*p1=&x;
int*p2=&y;
cout<<"Enter first numbers; ";
cin>>*p1;
cout<<"Enter second numbers; ";
cin>>*p2;

cout<<*p1+*p2;





}