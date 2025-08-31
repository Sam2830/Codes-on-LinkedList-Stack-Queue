//Linked List: Insertion at the nth position
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

struct Node{
  int data ;
  struct Node* next;
};

struct Node* head;

void Insert(int data, int n);
void Print();

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

