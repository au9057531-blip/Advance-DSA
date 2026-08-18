#include<iostream>
using namespace std;
class stack{
        int size;
        int top;
        int arr[20];
        
        public:
        stack(int n){
            size=n;
            top=-1;
            
        }
        void push(int val){
            if(top=size-1){
                cout<<"overflowed";
            }else{
                arr[++top]=val;
            }

        }
        void pop(){
            if(top==-1){
                cout<<"underflowed";
            }else{
                top--;
            }
        }
        void display(){
            if(top==-1){
                cout<<"underflowed";
            }else{
                for(int i=0;size>=i;i--){
                    cout<<" "<<arr[i];
                }

                
            }
        }
        

};
int main(){
    int n;
    cin>>n;
    cout<<"enter the elements:";
    stack s(n);
    s.push(1);
    s.push(2);
    s.push(3);
}