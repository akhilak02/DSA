#include<stdio.h>
int search();
int main(){
    int arr[]={56,77,88,99,25,45,18,35,65};
    int key=18;
    int n=sizeof(arr)/sizeof(arr[0]);
    int position = search(arr,key,n);
    if(position==-1){
        printf("element not found");
    }else{
        printf("Element found at position %d ",position+1);
    }

}
int search(int arr[],int key, int n){
    for(int i=0;i<=n;i++){
        if(arr[i]==key)
        return i;
        
    }
    return -1;
}