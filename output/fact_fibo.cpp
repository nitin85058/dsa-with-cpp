// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number which of you want factorial : ";
//     cin>>n;
//     int fact=1;
//     int i;
//     while(i<=n){
        
//         fact=fact*i;
//         i++;
//     }
//     cout<<fact;
// }


// 

// #include<iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     int fact=1;
//     int i=1;
//     while(i<=n){
//         fact*=i;
//         cout<<i<<"   "<<fact<<endl;
//         i++;
        
//     }
    

// }

// #include<iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     int a=1,b=1,sum=0;
//     int x=n;
//     for(int i=1;i<=n-2;i++){
//         sum=a+b;
//         a=b;
//         b=sum;
//     }
//     if(x==1 || x==2) cout<<1;
//     else{
//         cout<<sum;
//     }

// }


#include<iostream>
using namespace std;
int main (){
    int x,y;
    cout<<"Enter the number x : ";
    cin>>x;
    cout<<"Enter the number y : ";
    cin>>y;
    int p=1;
    for(int i=1;i<=y;i++){
        p=p*x;
    }
    cout<<p;
}
    
