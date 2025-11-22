// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    //Digit concept
    //when we do module we get last digit
    //when we divide we number that is left which integer
    int a=153;
    // int count=0;
    // while(a>0){
    //     int lastdigit=a%10;
    //     count++;
    //     //cout<<"Last Digit: "<<lastdigit<<endl;
    //     a=a/10; 
        
    // }
    // cout<<"total number of digit: "<<count<<endl;
    //Another method of counting of digit
     //log10(n)
     //Q .Reversing of number
    //  int rev=0;
    //  while(a>0){
    //      int lastdigit=a%10;
    //           a=a/10;
    //     //cout<<"Last Digit: "<<lastdigit<<endl;
     
    //     rev=rev*10+lastdigit;
    //  }
    //  cout<<rev;
     //Armstrong Number
     int count=0;
     int sum=0;
     int temp=a;
     while(a>0){
         int lastdigit=a%10;
         count++;
         a=a/10;
       
        }
       // cout<<count;
         while(temp>0){
         int lastdigit=temp%10;
         sum=sum+pow(lastdigit,count);
         temp=temp/10;
       
        }
        cout<<sum;
        //Divisor
        //36->1,2,3,4,6,9,12,18,36
        //we find that all divisor between 1 to n that n=36
        cout<<endl;
        int n=36;
        cout<<"Divisor of 36: ";  
        for(int i=1;i<=n;i++){
            if(n%i==0){
               cout<<i<<" "; 
            }
        }
        cout<<"Another way"<<endl;
           for(int i=1;i*i<=n;i++){
            if(n%i==0){
              cout<<i<<" "; 
               if(i!= n/i){
                   cout<<n/i<<" ";
               }
            }
        }
        //GCD || HCF
        cout<<endl<<"GCD"<<endl;
        int n1=9;
        int n2=12;
         int gcd=1;
          
        for(int i=1;i<=min(n1,n2);i++){
            if((n1%i==0)&& (n2%i==0 )){
               gcd=i;
            }
        }
        cout<<gcd;
      
       
 return 0;
}