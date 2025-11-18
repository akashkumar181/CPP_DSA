// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    //conditional statement
//     cout<<"Enter your name: "<<endl;
//     int n;
//     cin>>n;
//     if(n>=0){
//         cout<<"Positive"<<endl;
//     }else{
//         cout<<"Negative"<<endl;
//     }
//     //checking odd even number
//   if(n%2==0){
//       cout<<"Even"<<endl;
//   }else{
//       cout<<"Odd"<<endl;
//   }
//   int marks;
//   cout<<"Enter your marks: "<<endl;
//   cin>>marks;
//   if(marks>=90){
//       cout<<"0"<<endl;
//   }else if(marks>=80 && marks<90){
//       cout<<"A"<<endl;
//   }else{
//       cout<<"B"<<endl;
//   }
//Q.Finding lower case and upper case
//   char ch;
//   cout<<"Enter your character"<<endl;
//   cin>>ch;
//   if(ch>='A' && ch <='Z'){
//       cout<<"Uppercase"<<endl;
//   }else{
//       cout<<"LowerCase"<<endl;
//   }
   //ascii value of a=97
   //ascii value of A=65
//Q.Find character 
// if(ch>=65 && ch <=90){
//       cout<<"Uppercase"<<endl;
//  }else{
//       cout<<"LowerCase"<<endl;
//   }

//terniary operator
//-->condition?stt1:stt2
//   int n;
//   cin>>n;
//   cout<< (n>=0 ? "positive":"negative")<<endl;

 //Loops
 //Q. print 1 to 5
//  cout<<"Enter your number:"<<endl;
//  int n;
//  cin>>n;
//  while(n<=10){
//      cout<<n*2<<endl;
//      n++;
//  }
//for loop
// cout<<"Enter your value: "<<endl;
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     cout<<i*2<<endl;
// }
//Q. sum of numbers from 1 to n;
// int sum=0;
// cout<<"Enter your number: "<<endl;
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     sum=sum+i;
//     if(sum==5){
//         break;
//     }
// }
//cout<<sum<<endl;
//break use krte bahar aa jate h loop se
//Q. Sum of all odd numbers from 1 to n
// int a;
// cout<<"Enter your number: "<<endl;
// cin>>a;
// int s=0;
// for(int i=1;i<=a;i++){
//     if(a%2==0){
//         break;
//     }else{
//         s=s+i;
//     }
// }
// cout<<s;
//Q.checking prime number
 int n;
 cout<<"Enter your number: "<<endl;
 cin>>n;
 bool isprime=true; //stating me prime
// for(int i=2;i<=n-1;i++){
//     if(n%i==0){
//       isprime=false; 
//       break;
// }
// }
// if(isprime){
//     cout<<"Prime"<<endl;
// }else{
//     cout<<"Not prime"<<endl;
// }
//Another way to check that is optimise
// for(int i=2;i*i<=n;i++){
//     if(n%i==0){
//         isprime=false;
//         break;
//     }
// }
// if(isprime){
//     cout<<"Prime"<<endl;
// }else{
//     cout<<"Not prime"<<endl;
// }
//nested loop
