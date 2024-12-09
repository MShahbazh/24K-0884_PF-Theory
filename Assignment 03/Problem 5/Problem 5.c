#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int main(){
    int i,j,n,m,k=0,l=true,loop=true,a;
    char name[100];
    char newname[100];
    char** speciesname;
    char*** speciesSupplies;
    printf("1.Add\n2.Display\n3.Update\n4.Delete\n5.Exit\n");
    while(loop){
    printf("Enter the Corresponding number: ");
    scanf("%d",&a);
    if(a==1){
        printf("Enter the number of species you want to add: ");
        scanf("%d",&n);
        speciesname=(char**)malloc(n*sizeof(char*));
        speciesSupplies=(char***)malloc(n*sizeof(char**));
        for(i=0;i<n;i++){
        speciesname[i]=(char*)malloc(100*sizeof(char));
        printf("Enter the Specie %d: ",i+1);
        scanf("%s",speciesname[i]);
        printf("Enter the number of Supplies to store in %s: ",speciesname[i]);
        scanf("%d",&m);
        speciesSupplies[i]=(char**)malloc(m*sizeof(char*));
        printf("Enter the Supplies of %s\n",speciesname[i]);
        for(j=0;j<m;j++){
                speciesSupplies[i][j]=(char*)malloc(100*sizeof(char));
                printf("Enter the name of %d supply: ",j+1);
                scanf("%s",speciesSupplies[i][j]);
        }
        printf("\n");
    }
    }
    else if(a==2){

    for(i=0;i<n;i++){
        printf("Species: %s\n",speciesname[i]);
        printf("Supplies: ");
        for(j=0;j<m;j++){
            printf("%s ",speciesSupplies[i][j]);
        }
        printf("\n");
    }
    }
    else if(a==3){
        printf("Name of the specie whose info you want to update: ");
    scanf("%s",name);
    for(i=0;i<n;i++){
        if(strcmp(name,speciesname[i])==0){
            k=i;
        }
        else{
            k=-1;
        }
    }
    if(k==-1){
        printf("No such Specie exist\n");
    }
    else{
        printf("Name of Supply of %s you want to update: ",speciesname[k]);
        scanf("%s",name);
        for(j=0;j<m;j++){
            if(strcmp(name,speciesSupplies[k][j])==0){
                printf("Enter the new supply: ");
                scanf("%s",newname);
                strcpy(speciesSupplies[k][j],newname);
                printf("Supply Updated Succesfully\n");
            }
            else{
                l=false;
            }
        }
        if(l==false){
            printf("No Such Supply Exits for %d's\n",speciesname[k]);
        }
    }
    } 
    else if(a==4){
        printf("Enter the Species name to Delete: ");
        scanf("%s",name);
        for(i=0;i<n;i++){
            if(strcmp(name,speciesname[i])==0){
                k=i;
            }
            else{
                k=-1;
            }
        }
        if(k==-1){
            printf("No such Specie Exist\n");
        }
        else{
                for(j=0;j<m;j++){
                    free(speciesSupplies[k][j]);
                    speciesSupplies[k][j]=NULL;
                }
                    free(speciesname[k]);
                    speciesname[k] = NULL;

        }
    }
    else if(a==5){
        loop=false;
    }
    }
    return 0;
}