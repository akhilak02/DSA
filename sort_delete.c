#include<stdio.h>
int findElement(int arr[],int low,int high,int key);
int delete(int arr[],int key ,int n){

    int pos=findElement(arr,0,n-1,key);
    if(pos==-1){
        printf("element not found !..");
    }
    int i; 
    for (i = pos; i < n - 1; i++) 
        arr[i] = arr[i + 1]; 
  
    return n - 1; 

}
int findElement(int arr[],int low,int high,int key){
    if(high < low)
        return -1;
    int mid=(low + high)/2;
    if(key==arr[mid])
        return mid;
    if(key>arr[mid])
        return findElement(arr, mid+1, high,key);

        return findElement(arr,low,mid-1,key);

}
int main(){
    int arr[]={10,20,30,40,50};
    int key=30;
    int n=sizeof(arr)/sizeof(arr[0]);

    printf("\nBefore Deletion:  ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    n=delete(arr,key,n);
    printf("\nAfter Deletion:  ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);

}