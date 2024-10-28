// #include<iostream> // rectangle
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the no of rows & * : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<j;
//         }
//         cout<<endl;
        
//     
// }

#include<iostream>//star triangle
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*i-1;j+=2){
            
            cout<<j;
            a+=2;
        }
        cout<<endl;
    }
}