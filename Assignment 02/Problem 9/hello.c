#include <stdio.h>
#define size_c 6
#define size_r 5
void print(char v[size_r][size_c] ){
    int z,y;
    // printf("\n");
     for(z=0;z<size_r;z++){
                for(y=0;v[z][y]!='\0';y++){
                    printf("%3c",v[z][y]);
                }
                printf("\n");
            }
            // printf("\n");
}
int main() {
    char s[size_r][size_c]={{'P','_','I','_','_','\0'},{'_','_','X','_','X','\0'},{'_','I','_','_','_','\0'},{'_','_','X','_','_','\0'},{'_','I','_','_','_','\0'}};
    char j,k;
    int i=0,l=0;
    print(s);
    
    do{
         printf("\nEnter: ");
        scanf(" %c",&j);
        
        
        
        // right 
        if(j=='d'){
             if(s[l][i+1]!='\0'){
            //  k=s[l][i+1];
            // s[l][i+1]=s[l][i];
            // s[l][i]=k;
            // i++;
            //     print(s);
            
            if(s[l][i+1]=='X'){
              printf("Cannot move further");
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
            //end
            }
            else
            {
            printf("Reached End");
            }
        }
        
        
        
        
        
        //left
          if(j=='a'){
        if(i-1>=0){
        //     k=s[l][i-1];
        //     s[l][i-1]=s[l][i];
        //     s[l][i]=k;
        //   print(s);
        //     i--;
        if(s[l][i-1]=='X'){
              printf("Cannot move further");
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
        //end
        }
        else
            {
            printf("Reached End");
            }
        }
        
        
        
        
        //down
        if(j=='s'){
             if(l+1<size_r){
            //  k=s[l+1][i];
            // s[l+1][i]=s[l][i];
            // s[l][i]=k;
            // l++;
            //     print(s);
            if(s[l+1][i]=='X'){
              printf("Cannot move further");
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
            //end
            }
            else
            {
            printf("Reached End");
            }
        }
        
        
        
        
        // up
        if(j=='w'){
        if(l-1>=0){
        //     k=s[l-1][i];
        //     s[l-1][i]=s[l][i];
        //     s[l][i]=k;
        //   print(s);
        //     l--;
        
           if(s[l-1][i]=='X'){
              printf("Cannot move further");
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
        //end
        }
        else
            {
            printf("Reached End");
            }
        }
        
        
        
        
        
    }while(j!='q');
  
    return 0;
}