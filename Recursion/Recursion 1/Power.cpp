#include<iostream>
using namespace std;
int pow(int a,int b){
if(b==0)  return 1;
return a*pow(a,b-1);
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