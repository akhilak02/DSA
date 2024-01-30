// #include<stdio.h>
// int insertEnd(int arr[],int n,int element,int key);
// int main(){
//     int arr[20]={4,9,12,18,33,40};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int element=6;
//     int key=22;
//     printf("Array Before Insertion: \n");
//     for(int i=0;i<=element;i++)
//         printf("%d ",arr[i]);
        

//       element=insertEnd(arr,n,element,key);
//      printf("Array After Insertion : ");
//      for(int i=0;i<=element;i++)
//         printf("%d ",arr[i]);


// }
// int insertEnd(int arr[],int n,int element,int key){
//     if(element>=n)
//         return n;
//      arr[element]==key;
//         return(element+1);
    
// }

#include<stdio.h>
int insertSorted(int arr[],int n,int key,int capacity){
    if(n>=capacity)
    return n;
    arr[n]=key;
    return(n+1);
}
int main(){
    int arr[20]={5,7,8,23,45,66};
    int capacity=sizeof(arr)/sizeof(arr[0]);
    int n=6;
    int i,key=18;
    printf("\n Before Insertion : ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
        n=insertSorted(arr,n,key,capacity);
        printf("\n After Insertion : ");
        for(i=0;i<n;i++)
        printf("%d ",arr[i]);
        return 0;
}