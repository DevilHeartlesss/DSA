#include<iostream>
using namespace std;
int main(){
    int x=5;


int* ptr=&x;
int**p=&ptr;
int*** q=&p;


cout<< vx<<endl;
cout<<*ptr<<endl;
cout<<**p<<endl;
cout<<***q;

}


//used to store address of single pointer 