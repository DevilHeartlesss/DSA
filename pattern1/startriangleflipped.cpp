#include<iostream>
using namespace std ;
int main(){
    int n;
    cout<< "No. Of Rows: ";
    cin>>n;
    //ek loop ke andar do loops hoga
    //har row ke andar do loop chalega
for (int i =1;
i<=n;
i++)
//spaces 
{for(int j =1;
j<=n-i;
j++){cout<<" ";}for(int k =1;
k<=i;
k++){cout<<"*";}
cout<<endl;}}
