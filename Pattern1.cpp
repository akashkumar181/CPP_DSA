#include<iostream>
using namespace std;
int main(){
    //Pattern
    //Square Pattern
    //step 1:- outer loop for rows 
    //step 2:-1 single row ke andr kya print krna h or kya kaam-->work of inner loop
    //Q n=4 
    //1 2 3 4
    //1 2 3 4
    //1 2 3 4
    //1 2 3 4
    int n=4;
    for (int i=0;i<n;i++){
        for (int j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    // for *
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    //for character
    for(int i=0;i<n;i++){
        for(char j='A';j<'E';j++){
            
            cout<<j<<" ";
        }
        cout<<endl;
    }
    //Q. n=3
    //1 2 3
    //4 5 6
    //7 8 9
    n=3;
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    cout<<"After Pattern: "<<num<<endl;
    //for char
    char ch='A';
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<ch<<" ";
            ch++;
            
        }
        cout<<endl;
    }
    //Triangle pattern
    //*
    //* *
    //* * *
    //* * * *
    n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    //Q. for numbers
    //1
    //2 2
    //3 3 3
    //4 4 4 4
     num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<num<<" ";
       }
        num++;
        cout<<endl;
    }
    char chh ='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<chh<<" ";
        }
        chh++;
        cout<<endl;
    }
    //Reverse triangle pattern
    //1
    //2 1
    //3 2 1
    //4 3 2 1
    num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<num-j<<" ";
        }
        num++;
        cout<<endl;
    }
    //floyd triangle pattern 
   num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}