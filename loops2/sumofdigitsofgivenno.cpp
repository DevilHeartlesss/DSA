#include<iostream>
using namespace std ;
int main()
{int n;
cout<<"Enter A number:";
cin>>n;
int lastdigit=0;//jaruri nahi hain phir bhi karlo
int sum =0;

while (n>0)
{
  lastdigit=n%10;//last digit find hota h isse
    sum+= lastdigit;//sum ke andar last digit ko add kardo
    n/=10;
}

cout<<sum;
}