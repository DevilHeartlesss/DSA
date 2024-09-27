#include<iostream>
using namespace std;

void fun(int x=7 , int y=8){cout<<x<<" "<<endl<<y;
}
int main(){
    int x=4;
    int y=8;
    fun(4,6);
}