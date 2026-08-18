#include<iostream>
using namespace std;
class stack{
       int size;
       int arr[90];
       int top;
public:
       stack(int n){
        size=n;
        top=-1;
       }
       void push(int val){
        if(top=size-1){
            top++;
            arr[top]=val;
        }else{
            cout<<"it is overflowed";

        }
       }
       void pop(){
        if(top==-1){
            cout<<"it is underflowed";
        }else{
            top--;
        }
        
       }
       void display(){
        if(top==-1){
            cout<<"underflowed";
        }else{
           for(int i=0;size>=0;i--){
            cout<<arr[i]<<" ";
           }
        }
       }
    };
  