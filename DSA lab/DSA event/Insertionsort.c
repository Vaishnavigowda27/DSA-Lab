#include<stdio.h>
int main(){
int a[]={8,5,9,4,3,2,1};
  int size = sizeof(a)/sizeof(a[0]);
  insertionSort(a,size);
  printf("Sorted Array:\n");
  for(int i=0;i<size;i++)
  printf("%d",a[i]);
}

void insertionSort(int arr[],int n){
  int i,j,key;
  for(int i=1;i<n;i++)
  {
    key=arr[i];
    j=i-1;
    while(j>=0 && arr[j]>key){
      arr[j+1]=arr[j];
      j=j-1;
    }
    arr[j+1]=key;
  }
}



void selectionSort(int arr[],int size){
  int temp;
  for(int i=0;i<size-1;i++){
    int min=i;
    for(int j=i+1;j<size;j++){
      if (arr[j]<arr[min])
      min=j;
    }
    temp=arr[min];
    arr[min]=arr[i];
    arr[i]=temp;
  }
}
