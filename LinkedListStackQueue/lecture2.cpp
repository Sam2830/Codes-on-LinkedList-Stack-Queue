#include<iostream.h>
#include<process.h>
#define MAXSIZE 10
using namespace std;

int Queue[MAXSIZE];
int front=-1;
int rear=-1
int count=0;

int main(){
 int choice,ITEM;
 while(1){
    cout<<"\n\n\n\n QUEUE Operation\n\n";
    cout<<" 1- insert value\n 2-delete value";
    cout<<"\n 3- Traverse Queue\n 4-exit\n\n ";
    cout<<"\t\t your choice:";
    cin>>choice;

    switch(choice){
case 1:
    cout<<"\n put a value:";
    cin>>ITEM;
    Enqueuq(ITEM);
    break;

case 2:
    ITEM=Dequeue();
    if(ITEM!=-1) cout<<"deleted\n";
    break;

case 3:
    cout<<"\n queue state\n"
    Traverse();
    break;

case 4:
    exit(0);

    }

 }
 return 0;
}
