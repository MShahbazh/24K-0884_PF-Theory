#include <stdio.h>
#include<windows.h>
#include<conio.h>
#include<time.h>
void top(){
  int y;
    for(y=0;y<10;y++){
    printf("\n");
   }
}
void spaces2(){
    int c;
    for(c=0;c<50;c++){
        printf(" ");
    }
}
void print(int row, int col, char v[row][col] ){
    top();
    int z,y;
     for(z=0;z<row;z++){
    printf("%*s",50, "|");
                for(y=0;y<=col-1;y++){
                    if(v[z][y]=='X'){
                      printf("\e[31m%2c\e[0m",v[z][y]);
                    }
                    else if(v[z][y]=='I'){
                      printf("\e[32m%2c\e[0m",v[z][y]);
                    }
                    else if(v[z][y]=='_'){
                      printf("%2c",v[z][y]); 
                    }
                    else{
                      printf("\e[34m%2c\e[0m",v[z][y]);
                    }
                }
                printf("%*s",1,"|");
                printf("\n");
            }
}
int main() {
   int a,g,h,b;
   char check;
char j,k;
int p=1,m=1;
int size_c,size_r;
do{
printf("\n First choose the rows and column.\n\n After that once the grid will be appear:\n W(up) A(left) S(down) D(right) are the movement keys.\n R repopulates the grid.\n Z take back to the column and rows screen.\n Q for Quit\n");
top();
printf("%*s",50,"Enter the rows: ");
scanf("%d",&size_r);
printf("%*s",53,"Enter the columns: ");
scanf("%d",&size_c);
size_c++;
p=1;
system("cls");
    do{
  char arr[7]={'_','_','I','_','X','I','\0'};
  char s[size_r][size_c];
      srand(time(0));
      for(g=0;g<size_r;g++){
       for(h=0;h<size_c;h++){
                a=rand() % 6;
                s[g][h]=arr[a];
       }
       s[g][size_c-1]='\0';
        }
    a=rand() % size_r;
    b=rand() % (size_c-1);
    s[a][b]='P';
    int i=b,l=a;
print(size_r,size_c,s);    
    do{        
         printf("\n%*s",56,"Enter: ");
        j=getch();
        if(j=='q'||j=='Q'){
          return 0; 
        }
        if(j=='z'||j=='Z'){
            p=0;
            break;
        }
        system("cls");
        if(j=='d'|| j=='D'){
             if(s[l][i+1]!='\0'){
            if(s[l][i+1]=='X'){
print(size_r,size_c,s);            }
          else if(s[l][i+1]=='I'){
                k='_';
                s[l][i+1]=s[l][i];
                s[l][i]=k;
print(size_r,size_c,s);               
i++;               
            }
          else {
                k=s[l][i+1];
                s[l][i+1]=s[l][i];
                s[l][i]=k;
print(size_r,size_c,s);                
i++;
          }
            }
            else
            {
print(size_r,size_c,s);              
            printf("\n%*s",94,"\e[3;31mCannot move further: Out of bounds\e[0m");
            printf("\n");
            }
        }       
         else if(j=='a'|| j=='A'){
        if(i-1>=0){
        if(s[l][i-1]=='X'){
print(size_r,size_c,s);            }
          else if(s[l][i-1]=='I'){
                k='_';
                s[l][i-1]=s[l][i];
                s[l][i]=k;
print(size_r,size_c,s);                
i--;              
            }
          else {
                k=s[l][i-1];
                s[l][i-1]=s[l][i];
                s[l][i]=k;
print(size_r,size_c,s);                i--;
          }
        }
        else
            {
print(size_r,size_c,s);                
  printf("\n%*s",94,"\e[3;31mCannot move further: Out of bounds\e[0m");
              printf("\n");
            }
        } 
       else if(j=='s'|| j=='S'){
             if(l+1<size_r){
            if(s[l+1][i]=='X'){
print(size_r,size_c,s);            }
          else if(s[l+1][i]=='I'){
                k='_';
                s[l+1][i]=s[l][i];
                s[l][i]=k;
print(size_r,size_c,s);             
   l++;
            }
          else {
                k=s[l+1][i];
                s[l+1][i]=s[l][i];
                s[l][i]=k;
print(size_r,size_c,s);                
l++;
          }
            }
            else
            {
print(size_r,size_c,s);          
  printf("\n%*s",94,"\e[3;31mCannot move further: Out of bounds\e[0m");
              printf("\n");
            }
        }
       else if(j=='w'|| j=='W'){
        if(l-1>=0){    
           if(s[l-1][i]=='X'){
print(size_r,size_c,s);            
}
          else if(s[l-1][i]=='I'){
                k='_';
                s[l-1][i]=s[l][i];
                s[l][i]=k;
print(size_r,size_c,s);                
l--;
            }
          else {
                k=s[l-1][i];
                s[l-1][i]=s[l][i];
                s[l][i]=k;
print(size_r,size_c,s);                
l--;
          }
        }
        else
            {
print(size_r,size_c,s);      
  printf("\n%*s",94,"\e[3;31mCannot move further: Out of bounds\e[0m");  
 printf("\n");         
   }
        }
  else{
           if(j!='R'&&j!='r'){
    print(size_r,size_c,s);          
    printf("\n%*s",79,"\e[3;31mEnter a valid value\e[0m");
    printf("\n");
           }
      }
    }while(j!='r' && j!='R' && p!=0);
   if(p==0){
    p++;
    break;
   }
    }while(p==1);
        system("cls");
    p=0;
}while(p==0);  
        getch();
}