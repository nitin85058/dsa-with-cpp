// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n,i;
//     // cout<<"Enter the number : ";
//     // cin>>n;
// //     i=2;
// //     while(i<=n-1){
// //         if(n%i==0){
// //             cout<<i<<" is a factor of "<<n;
// //             i++;
// //             break;
// //         }
        
// //     }
    
// // }


// #include<iostream>
// using namespace std;
// int main(){
//     int n,i;
//     cout<<"Enter the number : ";
//     cin>>n;
//     bool nm=true;
//     for(i=2;i<=n-1;i++){
//         if(n%i==0){
//             nm=false;
//             break;
//         }
//     }
//     if(n==1){
//         cout<<"1 is neither composite nor prime";
//     }
//     else if(nm==true){
//         cout<<n<<" is a prime number";
//     }
//     else if(nm==false){
//         cout<<n<<" is a composite number";
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int x=4,y=0;
//     while(x>=0){
//         x--;
//         y++;
//         if(x==y) continue;
//         else{
//             cout<<x<<"  "<<y<<endl;
//         }
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x=4,y=0;
//     while(x>=0){
//         if(x==y)
//         break;
//         else{
//             cout<<x<<"  "<<y<<endl;
//             x--;
//             y++;
//         }
//     }
    

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n,count=0;
//     cout<<"Enter the number : ";
//     cin>>n;
//     int q=n;
//     while(n>0){
//         n/=10;
//         count++;
//     }
//     if(q==0){
//         cout<<"Number of digits is 1";
//     }
//     else{
//         cout<<"Number of digits in "<<" is "<<count;
    
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     int a=n%10;
//     while(n>0){
//         n/=10;
//         a=a+n%10;
        
//     }
//     if(a==7) cout<<"Thala for a reason";
//     else cout<<a;
// }


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int r=0;
    int lastdig=0;
    while(n>0){
        r=r*10;
        lastdig=n%10;
        r=r+lastdig;
        n/=10;
    }
    cout<<r;

}