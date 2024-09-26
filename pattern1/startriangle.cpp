#include<iostream>
using namespace std ;
int main(){
    int n;
    cout<< "No. Of Rows: ";
    cin>>n;
    // int m;
    // cout<< " No. of Columns: ";
    // cin>>m;
    for(int i = 1 ;i<=n;
    i++)
    {for (int j = 1;j<=i;
    j++)
    {cout<<"*";}
    cout<<endl;
    }
    }