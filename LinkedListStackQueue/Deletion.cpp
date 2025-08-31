//Deletion
#include<iostream>
#include<stdlib.h>
using namespace std ;
struct Node{
 int data;
 struct Node* next;
};

struct Node* head;

void Insert(int data);
void Print();
void Delete(int n){
 struct Node* temp1=head;

 if(n==1){
    head=temp1->next;
 }
 int i;
 for(i=0;i<n-2;i++){
    temp1=temp1->next;
 }

};

int main(){
    head=NULL;
    Insert(2);
    Insert(4);
    Insert(7);
    Insert(6);
    Print();
    int n;
    cout<<"Enter the position n: \n";
    cin>>n;
    Delete(n);
    Print();

}
