#include<stdio.h>
int main(){
    int n; 
    printf("Enter the total number of matchsticks: ");
    scanf("%d",&n);
    if(n<=0){
        printf("Enter a valid Number");
    }
    else if(n%5==0){
        printf("-1");
    }
    else{
    printf("The Number of sticks to pick in first turn is/are: %d",n%5);
    }
    return 0;
}