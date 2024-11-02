#include <stdio.h>
#include<windows.h>
#include<conio.h>
#include<time.h>
#define size_c 10  // 6  
#define size_r 4 // 5 
// void spaces(){
//     int a=8,c,v;
//     for(c=0;c<a;c++){
//         printf("\n");
//     }
    
 
// }
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
void print(char v[size_r][size_c] ){
    top();
    int z,y;
    
 
    //  spaces();
     for(z=0;z<size_r;z++){
    printf("%*s",50, "|");
    //  spaces2();
                for(y=0;y<=size_c-1;y++){
                    // printf("%3c",v[z][y]);
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
            // printf("\n");
}

int main() {
   int a,g,h,b;
   char check;
char j,k;


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
    print(s);
    
    do{
         
         printf("\n%*s",56,"Enter: ");
        j=getch();
        if(j=='q'||j=='Q'){
          break;
        }
        system("cls");
        
        if(j=='d'|| j=='D'){
             if(s[l][i+1]!='\0'){
            if(s[l][i+1]=='X'){
               print(s);
            }
          else if(s[l][i+1]=='I'){
                k='_';
                s[l][i+1]=s[l][i];
                s[l][i]=k;
                print(s);
                i++;
               
            }
          else {
                k=s[l][i+1];
                s[l][i+1]=s[l][i];
                s[l][i]=k;
                print(s);
                i++;
          }
            }
            else
            {
             print(s);
                // spaces2();
                // printf("\n");
            printf("\n%*s",94,"\e[3;31mCannot move further: Out of bounds\e[0m");
            printf("\n");
            }
        }
        
         else if(j=='a'|| j=='A'){
        if(i-1>=0){
        if(s[l][i-1]=='X'){
               print(s);
            }
          else if(s[l][i-1]=='I'){
                k='_';
                s[l][i-1]=s[l][i];
                s[l][i]=k;
                print(s);
                i--;
              
            }
          else {
                k=s[l][i-1];
                s[l][i-1]=s[l][i];
                s[l][i]=k;
                print(s);
                i--;
          }
        }
        else
            {
                print(s);
                
  printf("\n%*s",94,"\e[3;31mCannot move further: Out of bounds\e[0m");
              printf("\n");
            }
        }
        
       else if(j=='s'|| j=='S'){
             if(l+1<size_r){
            if(s[l+1][i]=='X'){
             print(s);
            }
          else if(s[l+1][i]=='I'){
                k='_';
                s[l+1][i]=s[l][i];
                s[l][i]=k;
                print(s);
                l++;
              

            }
          else {
                k=s[l+1][i];
                s[l+1][i]=s[l][i];
                s[l][i]=k;
                print(s);
                l++;
          }
            }
            else
            {
             print(s);
              \
  printf("\n%*s",94,"\e[3;31mCannot move further: Out of bounds\e[0m");
              printf("\n");
            }
        }
        
       else if(j=='w'|| j=='W'){
        if(l-1>=0){    
           if(s[l-1][i]=='X'){
              print(s);
            }
          else if(s[l-1][i]=='I'){
                k='_';
                s[l-1][i]=s[l][i];
                s[l][i]=k;
                print(s);
                l--;
              
            }
          else {
                k=s[l-1][i];
                s[l-1][i]=s[l][i];
                s[l][i]=k;
                print(s);
                l--;
          }
        }
        else
            {
            print(s);
      
  printf("\n%*s",94,"\e[3;31mCannot move further: Out of bounds\e[0m"); 
      
 printf("\n");         
   }
        }
      //   else if(j=='r'||j=='R'){
          
      //   }
      else{
           if(j!='R'&&j!='r'){
            print(s);
          printf("\n%*s",79,"\e[3;31mEnter a valid value\e[0m");
           }
      }
     
    
    }while(j!='r' && j!='R');

    }while(j!='q' && j!='Q');
   
        getch();
}