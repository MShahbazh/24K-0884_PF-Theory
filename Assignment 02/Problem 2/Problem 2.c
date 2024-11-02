#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int i,j,c;
    char v[9999];
    char s[9999];
    int arr[9999]={0};
    printf("Enter the Slogans: ");
     fgets(v, 9999, stdin); 
    char *x = strtok(v, ",");
    while (x != NULL) {
        strcpy(s, x);
    for(i=0;i<9999;i++){
      j=s[i];
      arr[j]++;
    }
    printf("For %s = {",s);
    for(i=0;s[i]!='\0';i++){
          if(s[i]!='0')
        {
            printf("'%c': %d,",s[i],arr[s[i]]);
        }
        for(j=i+1;s[j]!='\0';j++){
            if(s[j]==s[i]){
                s[j]='0';
            }
        }
    }
    printf("}");
    printf("\n");
        x = strtok(NULL, ","); 
    }
    return 0;
}