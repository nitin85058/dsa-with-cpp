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
    int n;
    cout<<"Enter the n : ";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<comb(i,j)<<" ";

        }
        cout<<endl;

    }
}


// //optimised pascal triangle



#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n : ";
    cin>>n;
    for(int i=0;i<=n;i++){
        int curr=1;
        for(int j=0;j<=i;j++){
            cout<<curr;
            curr=curr*(i-j)/(j+1);
            
        
        }
        cout<<endl;    
    }
}

// void fn(int x,int y){
//     cout<<&x<<endl<<&y;
// }
// int main(){
//     int x=3;
//     int y=4;
//     cout<<"main x  "<<&x<<endl;
//     cout<<"main y  "<<&y<<endl;
//     fn(x,y);
// }

#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=5;
    cout<<a+b;
}