#include <stdio.h>
#include<string.h>
int BinaryToDecimal(int a){

    int i,j,k=0,c=0,d,e;
    // printf("Enter the Binary Number: ");
    // scanf("%d",&a);
    d=a;
    while(d!=0){
        c++;
        d=d/10;
    }
   for(i=0;i<c,a!=0;i++){
       e=1;
    for(j=0;j<i;j++){
        e=e*2;
    }
       k=k+(a%10)*e;
       a=a/10;
   }
  return k;
}
int DecimalToBinary(int a){
       int i,d,c=1;

    d=a;
    for(;(d/2)!=0;){
        d=d/2;
        c++;
    }
    int arr[c];
    for(i=0;i<c;i++,a=a/2){
        if(a%2!=0){
            arr[i]=1;
        }
        else
        {
            arr[i]=0;
        }
    }
    for(i=c-1;i>=0;i--){
        printf("%d",arr[i]);
    }
}
void DecimalToHexadecimal(int a){
       int i,j,k=0,c=0,d,e,y,temp;
     char str[9999];
  

   
 
    for(i=0;i<c,a!=0;i++){
        y=a%16;
        if(y==0){
            str[i]='0';
        }
        else if(y==1){
            str[i]='1';
        }
        else if(y==2){
            str[i]='2';
        }
        else if(y==3){
            str[i]='3';
        }
        else if(y==4){
            str[i]='4';
        }
        else if(y==5){
            str[i]='5';
        }
        else if(y==6){
            str[i]='6';
        }
        else if(y==7){
            str[i]='7';
        }
        else if(y==8){
            str[i]='8';
        }
        else if(y==9){
            str[i]='9';
        }
        else if(y==10){
            str[i]='A';
        }
        else if(y==11){
            str[i]='B';
        }
        else if(y==12){
            str[i]='C';
        }
        else if(y==13){
            str[i]='D';
        }
        else if(y==14){
            str[i]='E';
        }
        else if(y==15){
            str[i]='F';
        }
    
      a=a/16;
  }
  str[i]='\0';
  e=strlen(str);
  char str2[e+1];
  str2[0]=str[e-1];
  for(i=1,j=e-2;i<e-1,j>=0;i++,j--){
      str2[i]=str[j];
  }
  str2[e+1]='\0';
  for(i=0;i<e;i++){
      printf("%c",str2[i]);
  }
  
}
int HexadecimalToDecimal(char s[9999]){
       int a;
    
   
    int i,j,k,v=0,l,z;
    z=strlen(s);
    for(i=0;s[i]!='\0';i++){
    
        if(s[i]=='0'){
            k=0;
        }
        else if(s[i]=='1'){
            k=1;
        }
        else if(s[i]=='2')
       {
            k=2;
        }
        else if(s[i]=='3'){
            k=3;
        }
        else if(s[i]=='4'){
            k=4;
        }
        else if(s[i]=='5'){
            k=5;
        }
        else if(s[i]=='6'){
            k=6;
        }
        else if(s[i]=='7'){
            k=7;
        }
        else if(s[i]=='8'){
            k=8;
        }
        
        else if(s[i]=='9'){
            k=9;
        }
        else if(s[i]=='A'){
            k=10;
        }
        else if(s[i]=='B'){
            k=11;
        }
        else if(s[i]=='C'){
            k=12;
        }
        else if(s[i]=='D'){
            k=13;
        }
        else if(s[i]=='E'){
            k=14;
        }
        else if(s[i]=='F'){
            k=15;
        }
        else{
            printf("Invalid Input");
            return 0 ;
        }
        
        
        
        l=1;
        for(j=z-1-i;j>0;j--){
            l=l*16;
        }
        v=v+l*k;
    }
    return v;
}
void BinaryToHexadecimal(int b){
    int f= BinaryToDecimal(b);
    DecimalToHexadecimal(f);

}
void HexadecimalToBinary(char s[9999]){
    int f=HexadecimalToDecimal(s);
    DecimalToBinary(f);
}



int main() {
    int n,a;
    char num[9999];
    printf("1. Binary to Decimal\n2. Decimal to Binary\n3. Decimal to Hexadecimal\n4. Hexadecimal to Decimal\n5. Binary to Hexadecimal\n6. Hexadecimal to Binary");
    printf("\n");
    printf("Which Function you want to perform ?\n");
    printf("Enter the Corresponding Number: ");
    scanf("%d",&n);
    printf("\n");
    if(n==1){
        printf("Enter your Binary Number: ");
        scanf("%d",&a);
BinaryToDecimal(a);

    }
    else if(n==2){
          printf("Enter your Decimal Number: ");
        scanf("%d",&a);
    DecimalToBinary(a);

}
else if(n==3){
       printf("Enter your Decimal Number: ");
        scanf("%d",&a);
DecimalToHexadecimal(a);
}
else if(n==4){
      printf("Enter your Hexadecimal Number: ");
        scanf("%s",&num);
HexadecimalToDecimal(num);
}
else if(n==5){
    printf("Enter your Binary number: ");
    scanf("%d",&a);
    BinaryToHexadecimal(a);
}
else if(n==6){
    printf("Enter your Hexadecimal number: ");
    scanf("%s",&num);
    HexadecimalToBinary(num);
}
else {
    printf("Invalid Input");
}




    return 0;
}