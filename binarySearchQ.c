#include<stdio.h>
int findElement();
int main(){
    int arr[]={30,31,32,33,34,35,36};
    int key=34;
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("index is : %d",findElement(arr,0,n-1,key));

}
int findElement(int arr[],int low,int high,int key){
    if(high < low){
        return -1;
    }
    int mid=(low + high)/2;
    if(key==arr[mid]){
        return mid;
    }
    if(key>arr[mid]){
        return findElement(arr, mid+1, high,key);
    }else{
        return findElement(arr,low,mid-1,key);
    }
}