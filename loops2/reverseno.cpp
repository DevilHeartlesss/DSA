#include<iostream>
using namespace std ;
int main()
{
    int n  ;
    cout<<"Enter A number:";
    cin>>n;
    int lastdigit=0;
    int r = 0;
    while(n>0){
       
        lastdigit=n%10;  //last digit find hota hain isse 
         r=r*10; 
        r+=lastdigit;
        n/=10;
    }cout<<r;
}