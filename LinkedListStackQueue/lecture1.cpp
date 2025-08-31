#include<iostream>
#include<malloc.h>
#include<process.h>
using namespace std;

struct node{
   int info;
   struct node *next;
};


struct node *Head=NULL;
struct node *Previous, *Current;

void AddNode(int Item){
//
 struct node *NewNode;
 NewNode= new node;
 //NewNode=(struct node*)malloc(sizeof(struct node));
 NewNode->info=Item;
 NewNode->next=NULL;
 if(Head==NULL){
    Head=NewNode;
    return ;
 }
 if(NewNode->info<Head->info){
    NewNode->next= Head;
    Head=NewNode;
    return ;
 }

 Previous=Current=NULL;

 for(Current=Head;Current!=NULL; Current->next){
    if(NewNode->info<Current->info) break;
    else Previous=Current;
 }
 NewNode->next=Previous->next;
 Previous->next=NewNode;

}
void DeleteNode(){
//

int inf;
 if(Head==NULL){
    cout<<"\n empty linked list \n";
    return;

 }
 cout<<"Put the info to delete: \n";
    cin>>inf;
    if(inf==Head->info){
        Head=Head->next;
        return;
    }
    Previous=Current=NULL;
    for(Current=Head;Current!=NULL; Current=Current->next){
        if(Current->info==inf) break;
        Previous=Current;
    }
    if(Current==NULL) cout<<inf<<" not found in list\n";
    else {
        Previous->next=Current->next;
    }
}
void Traverse(){
//
 for(Current=Head;Current!=NULL;Current=Current->next){
    cout<<Current->info<<"\t";
 }

}

int main(){
  int info,option;
  while(1){
    cout<<"\n\n\n Simple Linked List Operations\n\n";
    cout<<"1- Add Node \n 2- Delete Node \n 3- Traverse List \n 4-Exit\n\n ";
    cout<<"\n Your Choice: ";
    cin>>option;
    switch(option){
    case 1:
        cout<<"\n Put info/value to add: ";
        cin>>info;
        AddNode(info);
        break;
    case 2:
        DeleteNode();
        break;
    case 3:
        cout<<"\n Linked List values: ";
        Traverse();
        break;
    case 4: exit(0);

    }

  }
  return 0;
}
