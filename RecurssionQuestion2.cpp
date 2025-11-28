// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
// void num(int i,int n){
    
//      if(i>n){
//          return;
//      }else{
         
//          cout<<i<<" ";
//          i++;
//          num(i,n);
//      }
//  }
 //Another method of above question
//  void num(int i,int n){
    
//      if(i>n){
//          return;
//      }else{
         
//          cout<<i<<" ";
//          num(i+1,n);
//      }
//  }
 //by backtracking of above question
  void num(int i,int n){
    
     if(i<1){
         return;
     }else{
         
      num(i-1,n);
      cout<<i<<" ";
     }
 }

// void num(int n){
//      if(n==0){
//          return;
//      }else{
//          cout<<n<<" ";
//          n--;
//          num(n);
//      }
//  }


int count=0;
void print(){
    if(count==5){
        return;
    }else{
        cout<<"Akash"<<" ";
        count++;
        print();
    }
}
int main() {
    print();
    int n;
    int i=1;
    cout<<endl;
    cout<<"Enter your number: ";
    cin>>n;
    num(n,n);
    return 0;
}