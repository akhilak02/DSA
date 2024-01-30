#include<stdio.h>
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            swap(&arr[i], &arr[min]);
        }
    }
}



int main(){
  int  arr[]={5,11,6,45,22,10};
  int n=sizeof(arr)/sizeof(arr[0]);
  printf("\nBefore sorting : ");
  for(int i=0;i<arr[i];i++){
    printf("%d ",arr[i]);
  }
  selectionSort( arr,n);
   printf("\nAfter sorting : ");
  for(int i=0;i<arr[i];i++){
    printf("%d ",arr[i]);
  }

}