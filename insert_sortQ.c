
#include<stdio.h>

int insertSort();

int main(){
    int arr[20]={3,6,18,23,45,50,66};
    int capacity=sizeof(arr)/sizeof(arr[0]);
    int n=7;
    int key=12;
    printf("\nArray Before insertion: ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    n=insertSort(arr,n,key,capacity);
     printf("\nArray After insertion: ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);

}

int insertSort(int arr[], int n ,int key ,int capacity){

    if(n>=capacity)
        return n;
    
    int i;

    for(i=n-1;(i>=0 && arr[i]>key);i--)
        arr[i+1]=arr[i];

        arr[i+1]=key;

        return(n+1);
    
}

