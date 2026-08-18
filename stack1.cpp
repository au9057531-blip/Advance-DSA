#include<iostream>
using namespace std;
class stack{
    int size;
    int top;
    int arr[20];
    public:
    stack(int n){
        top=-1;
        size=n;
    }
    void push(int val){
        if(top==size-1)
        {
            cout<<"overflow";
            return;
        }else{
            arr[++top]=val;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"underflow";
            return;
        }else{
            top--;
        }
    }
    void display(){
        if(top==-1){
            cout<<"stack show";
            return;
        }
        for(int i=top;top>=0;top--){
             cout<<arr[i]<<" ";
        }
       
    }
};
  int main(){
    int n;
    cin>>n;
    stack s[n] ;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(60);
    s.pop(60);
  }

