
//with array top=-1
#include<iostream>
using namespace std;
#define MAX_SIZE 101
int A[MAX_SIZE];


int top=-1;

int Push(int x){
  if(top==MAX_SIZE-1){
    cout<<"Error:Stack Overflow.\n";
    return 0;
  }
  top++;
  A[top]=x;
  return top;
}
void Pop(int t){
   top--;

}
int Top(){
return A[top];
}

void Print(){
  int i;
  cout<<"Stack: ";
  for(i=0;i<=top;i++){
    cout<<A[i]<<" ";
    //cout<<endl;

  }
  cout<<endl;
}

int main(){
    int t=top;
t=Push(2);
Print();
t=Push(5);
Print();


t=Push(10);
Print();
t=Push(7);
Print();
t=Push(9);
Print();
cout<<t<<" ";
Pop(t);
Print();


}
