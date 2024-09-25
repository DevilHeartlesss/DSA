#include<iostream>
using namespace std;
int pow(int x,int n){
  
if(n==1)  return x;
  if (n%2==0){
    return (pow(x,n/2)*pow(x,n/2));
}
if (n%2!=0){
     return (pow(x,n/2)*pow(x,n/2)*2);
}


int ans=pow(x,n/2);

return ans*ans;
}
int main()
{
    int a;
    cout<<"Enter Base: ";
    cin>>a;
    int b;
    cout<<"Enter power: ";
    cin>>b;
    cout<<a<<" Raised to the power "<<b<<" is "<<pow(a,b);

}