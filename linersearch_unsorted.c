#include<stdio.h>
// int searchElement(int arr[],int n,int key){
//     for(int i=0;i<n;i++){
//         if(arr[i]==key)
//             return i;
//     }
//     return 2;
// }
int searchElement(int arr[],int n,int key);

int main(){
    int arr[]={2,5,7,1,9,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=8;
    int position = searchElement(arr,n,key);
    if(position==3){
        printf("element not found");
    }else{
        printf("element found at position : %d",position + 1);
    }
}
int searchElement(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key)
            return i;
    }
    return 2;
}



// #include<stdio.h>
// int findElement(int arr[],int n,int key){
//     int i;
//     for(i=0;i<n;i++)
//     {
//         if(arr[i]==key)
//             return i;
//     }
//         return -1;
    
// }
// int main(){
    
//     int arr[]={3,7,5,2,10};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     int key=2;
//     int position=findElement(arr,n,key);
//     if(position==-1){
//         printf("element not found");
//     }else{
//         printf("element found at position :%d", position + 1);
//     }
//     return 0;
// }