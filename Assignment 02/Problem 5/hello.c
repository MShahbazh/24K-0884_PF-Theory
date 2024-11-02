#include<stdio.h>
#include<string.h>
int main(){
    int n;
    int i,j,k,g;
    printf("Enter the Number of terms: ");
    scanf("%d",&n);
    int arr[n];
    int arr2[n];
    for(i=0;i<n;i++){
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n Horizontal Histogram\n");
    // // Horizontal Histogram 
    for(i=0;i<n;i++){
        printf("Value %d: ",i+1);
        for(j=0;j<arr[i];j++){
            printf("*");
        }
        printf("\n");
    }
    // Vertical Histogram
    printf("\n Vertical Histogram\n");
    for(i=0;i<n;i++){
        arr2[i]=arr[i];
    }
    for(j=0;j<n;j++){
        for(i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            g=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=g;
                }
            }
        }
  for (i=arr[n-1]; i>0; i--) {
        for (j=0; j<n; j++) {
            printf(" ");
            if (arr2[j] >=i) {
                printf("*");
            } else {
                printf(" "); 
            }
        }
        printf("\n");
    } 
    printf(" ");
    for(j=0;j<n;j++){
        printf("%d ",arr2[j]);
    }
    return 0;
}