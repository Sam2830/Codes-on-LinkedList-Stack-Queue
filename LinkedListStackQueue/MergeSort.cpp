#include<iostream>
using namespace std;

void merge(int arr[], int l,int m, int r){

   int i,j,k;
   int n1= m-l+1; //n1=2-0+1=3
   int n2=r-m;//n2=5-2=3

   //Create two temp arrays
   int L[n1],R[n2];

   //Copy data to temp arrays l[],r[]

   for(i=0;i<n1;i++){
    L[i]=arr[l+i];
   }
   for(j=0;j<n2;j++){
    R[j]=arr[m+1+j];
   }

   //Merge the temp arrays back into arr[]
   i=0;
   j=0;
   k=l;

   while(i<n1&&j<n2){
    if(L[i]<=R[j]){
        arr[k]=L[i];
        i++;
    }  //12<=5 F//5<6 T
    else {
        arr[k]=R[j];
        j++;
    }
    k++;

   }
   //Copy the remaining elements of l[]
   while(i<n1){
    arr[k]=L[i];
    i++;
    k++;
   }

    while(j<n2){
    arr[k]=R[j];
    j++;
    k++;
   }



}


void mergeSort(int arr[],int l,int r){
  if(l>=r) return;
              //0>=5
    int m=l+(r-l)/2;  //m=0+5/2=2  ??

    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);

    merge(arr,l,m,r);

}

void printArray(int A[], int n){
   for(int i=0;i<n;i++){
    cout<<A[i]<<" ";
   }
   cout<<endl;
}

int main(){

   int arr[]={12,11,13,5,6,7};
   int arrSize=sizeof(arr)/sizeof(arr[0]);

   cout<<"Given array is \n";
   printArray(arr,arrSize);

   mergeSort(arr,0,arrSize-1);//arr[],0,5

   cout<<"Sorted array is \n";
   printArray(arr,arrSize);

}
