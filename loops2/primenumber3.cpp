#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"Enter a number:";
    cin>>n;
    bool flag = true;  //true means prime
    for (int i =2;
    i<=n;
    i++){
        if (n%i==0)//i is a factor of n 
        {
           flag=false;
           break;
        }
        
    } if(n==1) cout<<"1 is neighter prime nor composite";
  
   else if (flag=true) cout<<n<<" is a prime number";
   else cout<<n<<" is not a prime number";
else cout<<n<<"  is a composite";}