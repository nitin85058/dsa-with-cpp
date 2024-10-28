#include<iostream>
using namespace std;
// int main(){
//     int m;
//     cout<<"Enter the marks : ";
//     if(m>=91){
//         cout<<"Excellent";
//     }
//     else{
//         if(m>=81){
//             cout<<"very good";
//         }
//         else{
//             if(m>=71){
//                 cout<<"good";

//             }
//             else{
//                 if(m>=61){
//                     cout<<"can do better";
            
//                 }
//                 else{
//                     if(m>=51){
//                         cout<<"avg";
//                     }
//                     else{
//                         if(m>=41){
//                             cout<<"below avg";
//                         }
//                         else{
//                             cout<<"failed";
//                         }
//                     }
//                 }
//             }
//         }
//        }   }


int main(){
    cout<<"Enter the marks : ";
    int m;
    cin>>m;
    if(m>=91 && m<=100){
        cout<<"Excellent";
    }
    else if(m>=81){
        cout<<"very good";
    }
    else if(m>=71){
        cout<<"good";
    }
    else if(m>=61){
        cout<<"can do better";
    }
    else if(m>=51){
        cout<<"avg";
    }
    else if(m>=41){
        cout<<"below avg";
   }
   else{
    cout<<"failed";
   }
}   