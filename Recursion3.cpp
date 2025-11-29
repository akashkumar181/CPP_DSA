// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
//using parameterised
// void sum(int n,int s){
//     if(n<1){
//         cout<<s;
//         return;
//     }else{
//       sum(n-1,s+n);
//     }
// }
int sum(int n){
if(n==0){
    return 1 ;
}else{
    return n+sum(n-1);
}}
int factorial(int n){
    if(n==0){
        return 1;
    }else{
       
       return n*factorial(n-1);
    }
}
int main() {
    
    int n;
    cout<<"Enter your  number: ";
    cin>>n;
    int s=0;
    // sum(n,s);
    // int final=sum(n);
    // cout<<final;
    int final=factorial(n);
    cout<<final;

    return 0;
}