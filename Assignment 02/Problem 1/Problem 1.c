#include<stdio.h>
int main(){
    int i,y,z,c,t;
    int arr[5];
    // Taking the Input and restricting the user to enter values less than 9999
    for(i=0;i<5;i++){
        printf("Enter the Element Number %d: ",i+1);
        scanf("%d",&arr[i]); 
       if(arr[i]>=9999){
        printf("Value must be less than 9999\n");
        i--;
       } 
    }
    // Sorting the array in ascending order  
  for(i=0;i<5;i++){
        for(y=0;y<4;y++){
           if(arr[y]>arr[y+1]){
               t=arr[y+1];
               arr[y+1]=arr[y];
               arr[y]=t;
              z++;
          }
      }     
   }
    // The Second smallest number in the sorted array will obviously be on the index 1. 
   printf("The Second Smallest Element in the array is: %d", arr[1]);
   return 0;
}
