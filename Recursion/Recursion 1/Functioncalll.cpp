#include <iostream>
using namespace std;
// int product (int a,int b){
//     return a*b;

// }
// void gun(){
//     cout<<"hello world";

void fun(int n){
   if(n==0) return ;
    cout<<"good morning"<<endl;
    
   
    fun(n-1);
}
int main(){
    // int x=product(2,4);
    // cout<<x;
    int k;
    cout<<"Enter n: ";
    cin>>k;
    fun(k);
}