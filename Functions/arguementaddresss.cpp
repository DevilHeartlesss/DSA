#include<iostream>
using namespace std;

void fun(int x , int y){//formal parameters


    
    cout<<"Address of fun  x"<<&x<<endl;
    cout<<"Adress of fun  y "<<&y<<endl;

}
int main(){//actual parameters

    int x=3;
    int y=7;
    cout<<" adress of main x"<<&x<<endl;
    cout<<" adress of main y"<<&y<<endl;
    fun(x,y);
}

//adress of x AND Y print ho raha hain
