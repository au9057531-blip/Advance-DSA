#include<iostream>
using namespace std;
class stack{

    int size;
    int arr[29];
    int top;

    public:

    stack(int n){

         top=-1;
    size=n;
    }

    void push(int val){
        if(top==size-1){
            cout<<"overflow";

            return ;
        }else{
            arr[++top]==val;
        }

        
    }
    void pop(){
        if(top==-1){
            cout<<"underflow";
            return;
        }
        arr[top];
        --top;
    }
    void display(){
        if(top==-1){
            cout<<"stack is empty";
            return;
        }else{
            for(int i=top;i>=0;top--){
                cout<<" "<<arr[i];
            }
        }
    }
   

   
};
 int main(){
        int n;
        cin>>n;
        cout<<"Enter the elements:";
        
        stack s(n);
        s.push(56);
        s.push(34);
        s.push(12);
        s.push(90);
        s.push(26);
      
    }
