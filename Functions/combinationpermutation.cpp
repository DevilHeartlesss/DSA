#include<iostream>
#include<cmath>
using namespace std ;
int main (){

    int n;
    cout<<"Enter the number please baby: ";
    cin>>n;
    int r;
    cout<<"enter r please baby";
    cin>>r;
    int nfact=1;
    for (int i =2; i<=n;i++){
        nfact
        *=i;
    }
    int rfact=1;
    for(int i =2;i<=r;i++){
        rfact*=i;
    }
    int nrfact=1;
    for(int i = 2;
    i<=n-r;
    i++)
    {nrfact*=i;}
    int ncr = nfact/(rfact*nrfact);
    cout<<ncr;

}