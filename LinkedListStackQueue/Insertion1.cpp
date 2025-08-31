//Linked List: Insertion at the beginning
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

struct Node{
  int data ;
  struct Node* next;
};

struct Node* head;

void Insert(int x){
  Node* temp=(Node*)malloc(sizeof(struct Node));
  temp->data=x;
  temp->next=NULL;
  if(head!=NULL) temp->next=head;
  head=temp;
}

void Print(){
   struct Node* temp=head;
   cout<<"List is: \n";
   while(temp!=NULL){
    cout<<temp->data<<"\t"  ;
    temp=temp->next;

   }
   cout<<"\n";
}

int main(){
    int number,x;
   head=NULL;
   cout<<"How many numbers?\n";
   cin>>number;
   for(int i=0;i<number;i++){
    cout<<"Enter the numbers: \n";
    cin>>x;
    Insert(x);
    Print();

   }

}
