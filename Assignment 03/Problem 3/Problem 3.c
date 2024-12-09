#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int validateEmail(char* email){
    int i,count=0,k;
    for(i=0;email[i]!='\0';i++){
        if(email[i]==' '){
            return 0;
            break;
        }
        else if(email[i]=='@'){
            count++;
            k=i;
        }
    }
    if(count==1){
        if(email[k+1]=='.'){
            return 1;
        }
    }
    
}
int main(){
    char email[100];
    printf("Enter the Email: ");
    scanf(" %[^\n]",email);
    char* ptr=(char*)malloc((strlen(email)+1)*sizeof(char));
    strcpy(ptr,email);
    printf("%s",(validateEmail(ptr)==1)?"Valid Email":"Invalid Email");
    free(ptr);
    return 0;
}