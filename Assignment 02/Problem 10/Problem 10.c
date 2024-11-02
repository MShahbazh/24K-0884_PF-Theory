#include <stdio.h>

int main() {
  int i,n,j,k,l,sp;
  printf("Enter any number: ");
  scanf("%d",&n);
  int a=2*n-2;
  for(l=0,k=0;l<a;l+=2,k++){
      sp=0;
      for(j=a-k;j>0;j--){
          printf(" ");
      }
      for(i=0;i<=l;i++){

            if(i==0 || i==l){
          printf("*");
            }
            else{
                printf(" ");
                sp++;
            }
          
      }
      printf("\n");
  }
  // bottom 
for(i=0;i<n;i++){
    printf("*");
}
for(i=0;i<sp+2;i++){
    printf(" ");
}
for(i=0;i<n;i++){
    printf("*");
}
printf("\n");
// middle one
for(j=0,k=n;j<a;j+=2,k--){
    for(i=n-k+1;i>0;i--){
        printf(" ");
    }
for(i=2*n+sp-j;i>0;i--){
    if(i==2*n+sp-j||i==1){
    printf("*");
        
    }
    else{
        printf(" ");
    }
}
    printf("\n");
}
// lower
    int z=-1;
    int v=-1;
for(j=0,k=0;j<n-1;j++,k+=2){
        z++;
        v++;
    for(i=n-2-j;i>0;i--){
        printf(" ");
    }
for(i=2*n+1+k;i>0;i--){
    if(i==2*n+1+k||i==1){
    printf("*");
    }
    else if(i==n-z&&j<n-2){
        printf("*");
    }
    else if(i==n+2+k+v&&j<n-2){
        printf("*");
    }
    else{
        printf(" ");
    }
}
printf("\n");
}
   
    

    return 0;
}