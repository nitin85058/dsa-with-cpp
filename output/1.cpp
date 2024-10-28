// #include<iostream>
// using namespace std;
// int main(){
//     float a,b,c;
//     cout<<"Enter no 1 : ";
//     cin>>a;
//     cout<<"Enter no 2 : ";
//     cin>>b;
//     cout<<"Enter no 3 : ";
//     cin>>c;
//     if(a>b){
//         if(a>c){
//             cout<<a<<" is greatest";
//         }
//         else{
//             cout<<c<<" is greatest";
//         }
//     }
//     else{
//         if(b>c){
//             cout<<b<<" is greatest";
//         }
        
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int m;
//     cout<<"Enter the marks : ";
//     cin>>m;
//     (m>33)?(cout<<"passed"):(cout<<"failed");
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char x;
//     int a=2;
//     x=(a>0)?('a'):('S');
//     cout<<"Value of x : "<<x<<endl;
//     cout<<"Value of a : "<<a;
// }

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter month number : ";
    cin>>x;
    switch(x){
        case 1:
        cout<<"no of days in january is 31 ";
        break;
        case 2:
        cout<<"no of days in february is 28 ";
        break;
        case 3:
        cout<<"no of days in march is 31 ";
        break;
        case 4:
        cout<<"30";
        break;
        case 5:
        cout<<"31";
        break;
        case 6:
        cout<<"30";
        break;
        case 7:
        cout<<"sunday";
        break;
        default:
        cout<<"Enter a valid week number";
    }
}