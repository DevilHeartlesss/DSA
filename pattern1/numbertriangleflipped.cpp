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
j++){cout<<" ";}
for(int k =1;
k<=i;
k++)
{cout<<k;}
cout<<endl;}}


//summary 
//square /rectangle ka structure i 1 to n ; j 1 to n ;
//triangle tin type ka bnta mainly 
// i =1 to n j 1 to i
//2nd i = 1 to n j = 1 to n+1-i
//3rd i+1 to n j=1 to n-i k=1 to i
//nested loops 



// method 2
//if i+j>=n+1
// else me space dedena
