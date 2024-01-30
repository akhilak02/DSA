// #include<stdio.h>
// int insertPosition(int arr[],int n ,int position, int key ){
    
//     for(int i=n-1;i>=position;i--) {
//          arr[i+1]=arr[i];
//     }
       
//     arr[position]=key;
//     return n+1;
// }
// int main(){
//     int arr[20]={4,7,8,12,45,88};
//     int n=6;
//     int position=2;
//     int key=11;   
//      printf("\nBefore Insertion : ");
//      for(int i=0;i<n;i++)
//         printf("%d ",arr[i]);
//      n=insertPosition(arr,n,position,key);
    
//      printf("\naftre Insertion : ");
//      for(int i=0;i<n;i++)
//         printf("%d ",arr[i]);

// }


#include<stdio.h>
int insertPos(int arr[],int size,int pos,int key){
    int i;
    for( i=size-1;i>=pos;i++){
        arr[i+1]=arr[i];
    }
    arr[i+1]=key;
    return size+1;

}
int main(){
    int size,i;
    int arr[20];
    int pos=3;
    int key= 49;
    printf("enter size of an array : ");
    scanf("%d",&size);
    printf("enter elements to create an array : ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array Before insertion : ");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    size=insertPos(arr,size,pos,key);
     printf("Array After insertion : ");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}