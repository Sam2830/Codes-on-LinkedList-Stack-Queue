#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){

   for(int i=1;i<n;++i){
    int key=arr[i] ;    //key=11
    int j=i-1;         //j=0
    while(j>=0&& arr[j]>key){
           arr[j+1]=arr[j]; //17,17,30,7,20
           j--;
    }
    arr[j+1]=key;      //11,17,30,7,20

   }
}

void printArray(int arr[],int n){

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    cout<<endl;
  }

}

int main(){
  int arr[]={17,11,30,7,20,};
  int n=sizeof(arr)/sizeof(arr[0]);
  insertionSort(arr,n);
  printArray(arr,n);
  return 0;
}
