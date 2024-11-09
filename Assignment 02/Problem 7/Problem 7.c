#include <stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
void print( char arr[6][5]){
  int i,j;
  srand(time(0));
  for(i=0;i<6;i++){
      for(j=0;j<5;j++){
          arr[i][j]='A'+rand()%26;
      }
  }
  arr[5][0]='0';
  arr[5][1]='8';
  arr[5][2]='8';
  arr[5][3]='4';
  for(i=0;i<6;i++){
      for(j=0;j<5;j++){
          printf("%2c",arr[i][j]);
      }
      printf("\n");
  }
}
int main() {
    int i,j,k,Score,v,m=1;
    char s[6][5];
    char str[6];
    char str2[6];
    char str3[6];
    print(s);
    do{
        Score=0;
    do{
    printf("Enter the string: ");
    scanf("%s",&str);
    if(strcmp(str,"END")==0){
        break;
    }
      v=0;
  for(i=0;i<6;i++){
       for(j=0;j<4;j++){
           str2[j]=s[i][j];
            str3[j]=s[j][i];
       }
       str2[4]='\0';
       str3[4]='\0';
    if(strstr(str2,str)!=NULL){
        Score++;
        printf("%s is present Horizontally. Score %d\n",str,Score);
        v++;
        break;
    }
    else  if(strstr(str3,str)!=NULL){
        Score++;
        printf("%s is present Vertically. Score %d\n",str,Score);
        v++;
        break;
    }
  }
    if(v==0){
        Score--;
      printf("%s is not present Score %d\n",str,Score);
    } 
    }while(strcmp(str,"END")!=0);
        print(s);   
    }while(m==1);
    return 0;
}
