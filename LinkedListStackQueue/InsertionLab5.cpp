#include<iostream>
using namespace std;
struct Node{
int data;
struct Node* next;
};
 struct Node* head=NULL;

 //InsertionAtTheBeginning
 void insert(int new_data){

  struct Node* new_node=new Node();
  new_node->data=new_data;
  new_node->next=head;
  head=new_node;

 }


 void InsertAtSpecificPosition(int new_data, int position)
 {
     struct Node* new_node=new Node();
     struct Node* temp=head;
     new_node->data=new_data;
     new_node->next=NULL;

     if(position==0){
        new_node->next=head;
        head=new_node;
        return ;
     }
     for(int i=0;temp!=NULL&&i<position-1;i++){
        temp=temp->next;
     }
     if(temp==NULL){
        cout<<"Position Out of Bounds"<<endl;
        return;
     }

     new_node->next=temp->next;
     temp->next=new_node;

 }
 void InsertAtEnd(int new_data){
   struct Node* New_node=new Node();
   struct Node* temp=head;
   New_node->data=new_data;
   New_node->next=NULL;

   if(head==NULL){
    head=New_node;
    return;
   }

   while(temp->next!=NULL){
    temp=temp->next;
   }

   temp->next=New_node;

 }
 void display(){
 struct Node* ptr=head;

 if(ptr==NULL){
    cout<<"The list is empty"<<endl;
    return;
 }

 while(ptr!=NULL){
    cout<< ptr->data<<" ";
    ptr=ptr->next;
 }
 cout<<endl;
 }


 int main(){
 insert(3);
 insert(1);
 insert(7);
 insert(2);

 display();

 InsertAtSpecificPosition(5,2);
 display();

 InsertAtEnd(10);
 display();

 return 0;

 }
