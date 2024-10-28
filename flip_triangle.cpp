// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int k=1;k<=n-i;k++) cout<<" ";
//         for(int j=1;j<=i;j++) cout<<j;
//         for(int l=i-1;l>=1;l--) cout<<l;
//         cout<<endl;
//     } 
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows : ";
//     cin>>n;
//     int nsp=n-1;
//     int nst=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=nsp;j++){
//             cout<<" ";
//         }
//         nsp--;
//         for(int k=1;k<=nst;k++){
//             cout<<"*";
//         }
//         nst+=2;
//         cout<<endl;
//     }

// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of lines : ";
    cin>>n;
    int nst=1;
    int nsp=n-1;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        if(i<=n-1) nsp--;
        
        else nsp++;
        
        for(int k=1;k<=nst;k++){
            cout<<"*";
        }
        if(i<=n-1) nst+=2;
        else nst-=2;
        cout<<endl;

    }
    


        
}