#include<iostream>
using namespace std;
class queue{
          int size;
          int arr[40];
          int front;
          int rear;

          queue(int n){
            size=n;
            front=rear=0;
          }

          void push(int val){
            if(rear=size){
                 cout<<"overflowed";
            }else{
                   arr[rear]=val;
                   rear++;
                   return;

            }
          }
          void pop(){
            if(rear==front){
                cout<<"underflowed";
            }else{
                arr[front]=-1;
                front++;
                if(front==rear){
                    front=0;
                    rear=0;
                }
            }
          }
          void boolisempty(){
            if(rear==front){
              cout<<"arr is empty" ;
            }else{
                cout<<"arr is not empty" ;
            }
          }

};
int main(){
         int n;
         cin>>n;
}
