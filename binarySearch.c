#include<stdio.h>
int binarSearch(int arr[],int low,int high, int key){
    if(high<low)
        return -1;
        int mid=(low+high)/2;
        if(key==arr[mid])
            return mid;
        if(key>arr[mid])
            return binarSearch(arr,(mid+1),high,key);
            return binarSearch(arr,low,(mid-1),key);
           
}
int main(){
    int arr[]={8,9,10,11,12,13};
     int key=8;
    int n=sizeof(arr)/sizeof(arr[0]);
   
    printf("index :%d\n",binarSearch(arr,0,n-1,key));
    return 0;

}