#include<iostream>
using namespace std;
void startriangle(int x){

    for (int i = 1; i <=x; i++)
    {
        for(int j = 1; j<=i;
        j++){cout<<"*";}
        cout<<endl;
    }
    
}
//
int main()//ek hi baar chalta hain
{


startriangle(3);
   // greeting();//function calling
   cout<<"code run ho gaya bkl";

}