#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the alphabet : ";
    cin>>ch;
    int a;
    a=(int)ch;
    if((a>=65 && a<=90) || (a>=97 && a<=122)){
        cout<<"it is an alphabet ";
    }
    else{
        cout<<"it's not an alphabet ";
    }
}