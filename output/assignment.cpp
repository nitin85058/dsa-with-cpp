#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the marks of a : ";
    cin>>a;
    cout<<"Enter the marks of b : ";
    cin>>b;
    cout<<"Enter the marks of c : ";
    cin>>c;
    if(a<b && a<c){
        cout<<a<<" is least ";

    }
    else if(b<a && b<c){
        cout<<b<<" is least";
    }
    else{
        cout<<c<<" is least";
    }
}

// {
//     float r,ar,per;
//     cout<<"Enter t#include<iostream>
// using namespace std;
// int main()he radius : ";
//     cin>>r;
//     ar=3.14*r*r;
//     per=2*3.14*r;
//     cout<<ar<<endl<<per<<endl;
//     if(ar>per){
//         cout<<"ar is greater";
//     }
//     else{
//         cout<<"per is greater";
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int yr;
//     cout<<"Enter a year : ";
//     cin>>yr;
//     if(yr%4==0){
//         cout<<yr<<"  is a leap year ";
//     }
//     else{
//         cout<<yr<<"  is not a leap year";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     float l,b,ar,per;
//     cout<<"Enter the lentgth : ";
//     cin>>l;
//     cout<<"Enter the breadth : ";
//     cin>>b;
//     ar=l*b;
//     per=2*(l+b);
//     if(ar>per){
//         cout<<"area is greater";
//     }
//     else{
//         cout<<"perimeter is greater";
//     }

// }


// #include<iostream>
// using namespace std;
// int main(){
//     int s1,s2,s3;
//     cout<<"Enter the s1 : ";
//     cin>>s1;
//     cout<<"Enter the s2 : ";
//     cin>>s2;
//     cout<<"Enter the s3 : ";
//     cin>>s3;
//     if(s1==s2 && s1==s3){
//         cout<<"it is an equilateral triangle";
//     }
//     else if(s1==s2 || s1==s3){
//         cout<<"it is an isoceles triangle";
//     }
//     else{
//         cout<<"it is a scalene triangle";
//     }
// }

