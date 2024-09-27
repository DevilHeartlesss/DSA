#include<iostream>

using namespace std ;
int fact(int x){
    int f =1;
    for (int i=2;
    i<=x;
    i++){
        f*=i;
    }
    return f;

}


int combination(int n, int r){
    int ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;
}

int permutation( int n , int r){
    int npr= fact(n)/fact(n-r);
    return npr;


}

int main (){

    int n;
    cout<<"Enter the number please baby: ";
    cin>>n;
    int r;
    cout<<"enter r please baby: ";
    cin>>r;

    int npr = permutation(n,r);
    
    int ncr = combination(n,r);    
    
        // int nfact=1;
    // for (int i =2; i<=n;i++){
    //     nfact
    //     *=i;
    // }
    // int rfact=1;
    // for(int i =2;i<=r;i++){
    //     rfact*=i;
    // }
    // int nrfact=1;
    // for(int i = 2;
    // i<=n-r;
    // i++)
    // {nrfact*=i;}
    // int ncr = nfact/(rfact*nrfact);
    cout<<ncr<<endl<<npr;

}