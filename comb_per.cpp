#include<iostream>
using namespace std;
int ffact(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact*=i;
    }
    return fact;
}

int comb(int n,int r){
    return ffact(n)/(ffact(r)*ffact(n-r));
}

int main(){
    int n,r;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;
    // cout<<ffact(n)/(ffact(r)*ffact(n-r))<<endl<<ffact(n)<<endl<<ffact(r)<<endl<<ffact(n-r);

    cout<<comb(n,r);
}