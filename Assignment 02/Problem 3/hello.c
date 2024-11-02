#include <stdio.h>
int main() {
   int a=0,b=0;
    int i,j,k,l=0; 
   char s[9999];
  printf("Enter the words separated by spaces: ");
scanf("%[A-Z a-z]",s);
      for (a=0;s[a] != '\0';a++) {  
        char str[9999];         
            for (b=0; s[a] != ' ' && s[a] != '\0'; a++,b++) {
            str[b] = s[a];  
            }
            str[b] = '\0';         
            for(i=0;str[i]!='\0';i++){
            if(str[i]==str[i+1]){
          str[i]='a';
      }
      if(str[i]!='a'){
      printf("%c",str[i]);
          
      }
            }
            
        printf(" ");

    
}
           

    return 0;
}