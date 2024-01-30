#include<stdio.h>
int findElement();
int deleteElement(int arr[],int n,int key){
    int pos=findElement(arr,n,key);
    if(pos==-1){
        printf("element not found..");
    }
        for (int i = pos; i < n - 1; i++) 
        arr[i] = arr[i + 1]; 
  
    return n - 1; 
}
int findElement(int arr[],int n,int key){
        for(int i=0;i<=n;i++){
        if(arr[i]==key)
        return i;
        
    }
    return -1;
}
int main(){
    int arr[]={30,6,2,44,55};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=2;
    printf("\nBefore deletion :");
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);

    n=deleteElement(arr,n,key);

    printf("\nAfter deletion :");
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
}