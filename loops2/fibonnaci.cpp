#include<iostream>
using namespace std ;
int main()//1 1 2 3 5 8 13 21 34 55 89 last do term ka sum
{
    int n  ;
    cout<<"Enter A number: ";
    cin>>n;
    int a=1;
    int b=1;
    int sum = 0;
    for(int i =1; i<=n-2;
    i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    cout<<b;

}
