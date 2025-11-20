// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  int n=4;
  //Q. 
  //1 1 1 1 -->it has 0 space
  //  2 2 2 -->it has 1 space
  //    3 3 -->it has 2 space
  //      4 -->it has 3 space

  for(int i=0;i<n;i++)
  {
      for(int k=0;k<i;k++){
          cout<<" ";
      }
  for(int j=0;j<n-i;j++)
  {
          cout<<i+1;
  }
      cout<<endl;
  }
//Q. 
//      1     ->6 space
//    1 2 1   ->4 space
//  1 2 3 2 1 ->2 space
//1 2 3 4 3 2 1->0 space
cout<<endl;
for(int i=1;i<=n;i++){
    for(int k=0;k<n-i;k++){
        cout<<" ";
    }
    for(int j=0;j<i;j++){
        cout<<j+1;
    }
    
    for(int j=i-1;j>=1;j-- ){
        cout<<j;
    }
    cout<<endl;
}
// Hollow Diamond Pattern
//    *         // 3 spaces, 1 star
//   * *        // 2 spaces, 2 stars (hollow)
//  *   *       // 1 space, 2 stars with gap
// *     *      // 0 spaces, 2 stars with bigger gap
//  *   *       // mirror
//   * *        
//    *
//top part
 for(int i=0;i<n;i++){
     for(int k=0;k<n-i-1;k++){
         cout<<" ";
     }
     cout<<"*";
     if(i!=0){
     for(int j=0;j<2*i-1;j++){
         cout<<" ";
     }
         cout<<"*";
     }
     
     cout<<endl;
 }
 for(int i=0;i<n-1;i++){
     for(int j=0;j<i+1;j++){
         cout<<" ";
     }
     cout<<"*";
     if(i!=n-2){
         for(int p=0;p<2*(n-i)-5;p++){
             cout<<" ";
         }
         cout<<"*";
     }
     cout<<endl;
 }

}