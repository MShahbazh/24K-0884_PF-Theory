#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("Enter the Number of words: ");
    scanf("%d",&n);
    char z[n][9999];
    char v[9999];
    char t[9999];
   int i,j,k,g;
    char x,y;
    for(i=0;i<n;i++){
        printf("Enter Word %d: ",i+1);
        scanf("%s",&z[i][0]);
    }
    printf("\n");
    printf("[");
    for(g=0;g<n;g++){
    strcpy(v,z[g]);
    for(i=0;i<3;i++){
        for(j=0;v[j+1]!='\0';j++){
            if(v[j]>v[j+1]){
                x=v[j+1];
                v[j+1]=v[j];
                v[j]=x;
            }
        }
    }
  printf("[");
    for(i=0;i<n;i++){
        strcpy(t,z[i]);
          for(k=0;k<3;k++){
        for(j=0;t[j+1]!='\0';j++){
            if(t[j]>t[j+1]){
                x=t[j+1];
                t[j+1]=t[j];
                t[j]=x;
            }
        }
    }
        if(strcmp(v,t)==0){
            printf("\"%s\"",z[i]);
            printf(",");
        }
    }
    printf("],");
    }
    printf("]");
    return 0; 
}