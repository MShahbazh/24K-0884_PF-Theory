#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

typedef struct devicepreferences{
    int resolution[2];
    float playback_history;
    float bandwidthusage;
}preference;

typedef struct attributes{
    char title[100];
    float rating;
    float runtime;
    char encoding_format[5];
}attribute;

void adding_username(int users,char** username){
    int i;
    for(i=0;i<users;i++){
        username[i]=malloc(10*sizeof(char));
    }
    printf("User's Info:\n");
    for(i=0;i<users;i++){
        printf("Enter the User %d name (it must be unique): ",i+1);
        scanf("%s",username[i]);
    }
}

void adding_categoryname(int category,char** categoryname){
    int i;
    for(i=0;i<category;i++){
        categoryname[i]=malloc(10*sizeof(char));
    }
    printf("Category's Info:\n");
    for(i=0;i<category;i++){
        printf("Enter the name of Category %d: ",i+1);
        scanf("%s",categoryname[i]);
    }
}

void printing_usernames(int users, char** username){
    int i;
    printf("Users:\n");
    for(i=0;i<users;i++){
        printf("%s\n",username[i]);
    }
}

void printing_categorynames(int category, char** categoryname){
    int i;
    printf("CategoryInfo:\n");
    for(i=0;i<category;i++){
        printf("%s\n",categoryname[i]);
    }
}

void adding_engagementtime(float** engagementMatrix, int users, int category, char** username, char** categoryname){
    int i,j;
    for(i=0;i<category;i++){
        engagementMatrix[i]=(float*)malloc(category*sizeof(float));
    }
    // we will be adding the average watching time of the user in minutes
    for(i=0;i<users;i++){
        printf("\nData for %s's Viewing time for all categories:\n",username[i]);
        for(j=0;j<category;j++){
            printf("Enter the average viewing time of %s: ",categoryname[j]);
            scanf("%f",&engagementMatrix[i][j]);
        }
    }
}

void printing_engagementtime(float** engagementMatrix,int users,int category,char** username, char** categoryname){
    int i,j;
    printf("The data:\n");
    printf("%-10s","Users");
    for(i=0;i<category;i++){
        printf("%-10s ",categoryname[i]);
    }
    printf("\n");
    for(i=0;i<users;i++){
    printf("%-10s ",username[i]);
        for(j=0;j<category;j++){
            printf("%-10.1f ",engagementMatrix[i][j]);
        }
    printf("\n");
    }
}

void adding_devicenames(char** devicename,int device){
    int i;
     for(i=0;i<device;i++){
        devicename[i]=(char*)malloc(10*sizeof(char));
    }
    for(i=0;i<device;i++){
        printf("Enter the name of device %d: ",i+1);
        scanf("%s",devicename[i]);
    }
}

void printing_devicenames(char** devicename, int device){
    int i;
    printf("Devices:\n");
    for(i=0;i<device;i++){
        printf("%s\n",devicename[i]);
    }
}

void adding_devicedata(char** devicename,char** username, int users, int device, preference** deviceMatrix){
    int i,j;
    for(i=0;i<device;i++){
        deviceMatrix[i]=(preference*)malloc(device*sizeof(preference));
    }
    for(i=0;i<users;i++){
        printf("\nUser %s:\n",username[i]);
        for(j=0;j<device;j++){
            printf("Enter the Widht of %s: ",devicename[j]);
            scanf("%d",&deviceMatrix[i][j].resolution[0]);
            printf("Enter the Height of %s: ",devicename[j]);
            scanf("%d",&deviceMatrix[i][j].resolution[1]);
            printf("Enter the Play back History of %s: ",devicename[j]);
            scanf("%f",&deviceMatrix[i][j].playback_history);
            printf("Enter the Bandwidth Usage of %s: ",devicename[j]);
            scanf("%f",&deviceMatrix[i][j].bandwidthusage);
        }
    }
}

void printing_devicedata(char** devicename,char** username,int users,int device,preference** deviceMatrix){
    int i,j;
    printf("\nThe data of device preferences:\n");
    for(i=0;i<users;i++){
    printf("\n%s Prefrences:\n",username[i]);
    for(j=0;j<device;j++){
        printf("%s\n",devicename[j]);
        printf("Width: %d\n",deviceMatrix[i][j].resolution[0]);
        printf("Height: %d\n",deviceMatrix[i][j].resolution[1]);
        printf("Playback History: %.2f\n",deviceMatrix[i][j].playback_history);
        printf("Bandwidth Usage: %.2f\n",deviceMatrix[i][j].bandwidthusage);
    }
    }
}

void adding_contenttype(char** contentname, int content){
     int i;
     for(i=0;i<content;i++){
        contentname[i]=(char*)malloc(10*sizeof(char));
    }
    for(i=0;i<content;i++){
        printf("Enter the type of content %d: ",i+1);
        scanf("%s",contentname[i]);
    }
}

void printing_contenttype(char** contentname, int content){
    int i;
    printf("Content:\n");
    for(i=0;i<content;i++){
        printf("%s\n",contentname[i]);
    }
}

void adding_contentmetadata(char** contentname, int content,int category,attribute** contentmetadata, char** categoryname){
    int i,j;
    for(i=0;i<content;i++){
        contentmetadata[i]=(attribute*)malloc(content*sizeof(attribute));
    }
    for(i=0;i<category;i++){
        printf("\n%s Data:\n",categoryname[i]);
        for(j=0;j<content;j++){
            printf("Enter the title of the %s: ",contentname[j]);
            scanf("%s",contentmetadata[i][j].title);
            printf("Enter the rating of %s: ",contentmetadata[i][j].title);
            scanf("%f",&contentmetadata[i][j].rating);
            printf("Enter the runtime of %s(In Hours): ",contentmetadata[i][j].title);
            scanf("%f",&contentmetadata[i][j].runtime);
            printf("Enter the Encoding Format of %s: ",contentmetadata[i][j].title);
            scanf("%s",contentmetadata[i][j].encoding_format);
        
        }
        printf("\n");
    }
    
}

void printing_contentmetadata(char** contentname, int content,int category,attribute** contentmetadata, char** categoryname){
    int i,j;
    printf("\nThe Content data:\n");
    for(i=0;i<category;i++){
        printf("\nCategory %s:\n",categoryname[i]);
        for(j=0;j<content;j++){
            printf("%s\n",contentname[j]);
            printf("Title: %s\n",contentmetadata[i][j].title);
            printf("Rating: %f\n",contentmetadata[i][j].rating);
            printf("Runtime: %f\n",contentmetadata[i][j].runtime);
            printf("Encoding Format: %s\n",contentmetadata[i][j].encoding_format);
        }
    }
}

int main(){
    int users,category,device,content,i,j,loopvar,displaydata,updatedata,index,index2,updatepreference,updatecontent;
    bool loop=true,data,data2;
    char** username;
    char** categoryname;
    char** devicename;
    float** engagementMatrix;
    char** contentname;
    preference** deviceMatrix;
    attribute** contentmetadata;
    char name[100];
    char name2[100];

    printf("---- ADD DATA  ----");
    printf("\nNumber of Users: ");
    scanf("%d",&users);
    printf("Number of Categories: ");
    scanf("%d",&category);
    username=(char**)malloc(users*sizeof(char*));
    categoryname=(char**)malloc(category*sizeof(char*));
    engagementMatrix=(float**)malloc(users*sizeof(float*));
    deviceMatrix=(preference**)malloc(users*sizeof(preference*));
    contentmetadata=(attribute**)malloc(category*sizeof(attribute*));

    adding_username(users,username);
    adding_categoryname(category,categoryname);
    adding_engagementtime(engagementMatrix,users,category,username,categoryname);

    printf("\nEnter the number of Devices whose data to be add: ");
    scanf("%d",&device);
    devicename=(char**)malloc(device*sizeof(char*));
    adding_devicenames(devicename,device);
    adding_devicedata(devicename,username,users,device,deviceMatrix);

    printf("\nEnter the Number of content(movies,shows) you want to add: ");
    scanf("%d",&content);
    contentname=(char**)malloc(content*sizeof(char*));
    adding_contenttype(contentname,content);
    adding_contentmetadata(contentname,content,category,contentmetadata,categoryname);
 
    while(loop){
        printf("\n\n\n1.Display Data\n2.Update Data\n3.Exit");
        printf("\nEnter the Corresponding Number: ");
        scanf("%d",&loopvar);
        if(loopvar==1){
            data=true;
            while(data==true){
                printf("\n---- DISPLAY DATA (LOOP) ----");
            printf("\nWhich data you want to display: ");
            printf("\n1.User's name\n2.Category name\n3.Device names\n4.Content types name\n5.Engagement Time\n6. Device Preferences\n7. Content Data\n8. All\n9.Exit Display Option");
            printf("\nEnter the number to display: ");
            scanf("%d",&displaydata);
            printf("\n");
            if(displaydata==1) printing_usernames(users,username);
            else if(displaydata==2) printing_categorynames(category,categoryname);
            else if(displaydata==3) printing_devicenames(devicename,device);
            else if(displaydata==4) printing_contenttype(contentname,content);
            else if(displaydata==5) printing_engagementtime(engagementMatrix,users,category,username,categoryname);
            else if(displaydata==6) printing_devicedata(devicename,username,users,device,deviceMatrix); 
            else if(displaydata==7) printing_contentmetadata(contentname,content,category,contentmetadata,categoryname);
            else if(displaydata==8) {
                printing_usernames(users,username);
                printing_categorynames(category,categoryname);
                printing_devicenames(devicename,device);
                printing_contenttype(contentname,content);
                printing_engagementtime(engagementMatrix,users,category,username,categoryname);
                printing_devicedata(devicename,username,users,device,deviceMatrix);
                printing_contentmetadata(contentname,content,category,contentmetadata,categoryname);
            }
            else if(displaydata==9) data=false;
            else printf("\nInvalid Choice");
            }
        }
        if(loopvar==2){
           data=true;
           while(data==true){
            printf("\n\n");
            printf("---- UPDATE DATA (LOOP)----");
            printf("\n1.Usernames\n2.Category names\n3.Device names\n4. Content type\n5. Engagement Time\n6. Device Preferences\n7. Content Data\n8. Exit Update Option\n");
            printf("\nEnter the number to update data: ");
            scanf("%d",&updatedata);
            if(updatedata==1){
                index=-99;
                printf("\nEnter the User name to update: ");
                scanf("%s",name);
                for(i=0;i<users;i++){
                    if(strcmp(name,username[i])==0){
                        index=i;
                        break;
                    }
                }
                if(index!=-99){ 
                    printf("Enter the new name: ");
                    scanf("%s",username[index]);
                    printf("\nUsername Updated Successfully\n");
                }
                else{
                    printf("\nUser donot exit\n");
                }
            }
            else if(updatedata==2){
                index=-99;
                printf("\nEnter the Category name to update: ");
                scanf("%s",name);
                for(i=0;i<category;i++){
                    if(strcmp(name,categoryname[i])==0){
                        index=i;
                        break;
                    }
                }
                if(index!=1){ 
                    printf("Enter the new name: ");
                    scanf("%s",categoryname[index]);
                    printf("\nCategory name Updated Successfully\n");
                }
                else{
                    printf("\nCategory donot exit\n");
                }
            }
            else if(updatedata==3){
                index=-99;
                printf("\nEnter the Device name to update: ");
                scanf("%s",name);
                for(i=0;i<device;i++){
                    if(strcmp(name,devicename[i])==0){
                        index=i;
                        break;
                    }
                }
                if(index!=-99){ 
                    printf("Enter the new name: ");
                    scanf("%s",devicename[index]);
                    printf("\nDevice name Updated Successfully\n");
                }
                else{
                    printf("\nDevice name donot exit\n");
                }
            }
            else if(updatedata==4){
                index=-99;
                printf("\nEnter the Content name to update: ");
                scanf("%s",name);
                for(i=0;i<content;i++){
                    if(strcmp(name,contentname[i])==0){
                        index=i;
                        break;
                    }
                }
                if(index!=-99){ 
                    printf("Enter the new name: ");
                    scanf("%s",devicename[index]);
                    printf("Content name Updated Successfully");
                }
                else{
                    printf("\nContent name donot exit\n");
                }
            }
            else if(updatedata==5){
                index=-99;
                printf("Enter the name of user: ");
                scanf("%s",name);
                for(i=0;i<users;i++){
                    if(strcmp(name,username[i])==0){
                        index=i;
                        break;
                    }
                }
                if(index!=-99){
                index2=-99;
                printf("Enter the name of category: ");
                scanf("%s",name2);
                for(j=0;j<category;j++){
                    if(strcmp(name2,categoryname[i])==0){
                        index2=i;
                        break;
                    }
                }
                if(index2!=-99){
                    printf("\nEnter the new Average Engagement time of %s for category %s: ",username[index],categoryname[index2]);
                    scanf("%f",&engagementMatrix[index][index2]);
                    printf("\nEngagement Time Upated Succuessfully\n");
                }
                else{
                    printf("\nCategory name does no Exist\n");
                }
                }
                else{
                    printf("\nUsername doesnot exist\n");
                }
            }
            else if(updatedata==6){
                index=-99;
                index2=-99;
                printf("\nEnter the name of User: ");
                scanf("%s",name);
                for(i=0;i<users;i++){
                    if(strcmp(name,username[i])==0){
                        index=i;
                        break;
                    }
                }
                if(index!=-99){
                    printf("Enter the Device name: ");
                    scanf("%s",name2);
                    for(j=0;j<device;j++){
                        if(strcmp(name2,devicename[i])==0){
                            index2=j;
                            break;
                        }
                    }
                    if(index2!=-99){
                        data2=true;
                        while(data2==true){
                        printf("\n\n1.Resolution Width\n2.Resolution Height\n3.Play back history\n4.Bandwidth usage\n5.Exit Device Preference Update");
                        printf("\nEnter the Corresponding number to update preferences of User %s Device %s: ",username[index],devicename[index2]);
                        scanf("%d",&updatepreference);
                        if(updatepreference==1){
                            printf("Enter the new resolution width for user %s device %s: ",username[index],devicename[index2]);
                            scanf("%d",&deviceMatrix[index][index2].resolution[0]);
                            printf("\n%s's%s Resolution (width) updated Successfully\n",username[index],devicename[index2]);
                        }
                        else if(updatepreference==2){
                            printf("Enter the new resolution height for user %s device %s: ",username[index],devicename[index2]);
                            scanf("%d",&deviceMatrix[index][index2].resolution[1]);
                            printf("\n%s's%s Resolution (width) updated Successfully\n",username[index],devicename[index2]);
                        }
                        else if(updatepreference==3){
                            printf("Enter the new Playback history for user %s device %s: ",username[index],devicename[index2]);
                            scanf("%d",&deviceMatrix[index][index2].playback_history);
                            printf("\n%s's%s Playback history updated Successfully\n",username[index],devicename[index2]);
                        }
                        else if(updatepreference==4){
                            printf("Enter the new Bandwidth Usage for user %s device %s: ",username[index],devicename[index2]);
                            scanf("%d",&deviceMatrix[index][index2].bandwidthusage);
                            printf("\n%s's%s Bandwidth usage updated Successfully\n",username[index],devicename[index2]);
                        }
                        else if (updatepreference=5){
                            data2=false;
                        }
                        else{
                            printf("\nInvalid Option\n");
                        }
                        }
                    }
                    else{
                        printf("\nDevice does not exist");
                    }
                }
                else{
                    printf("\nUser does not exist");
                }
            }
            else if(updatedata==7){
                index=-99;
                index2=-99;
                data=true;
                printf("\nEnter the Category name: ");
                scanf("%s",name);
                for(i=0;i<category;i++){
                    if(strcmp(name,categoryname[i])==0){
                        index=i;
                        break;
                    }
                }
                if(index!=-99){
                    printf("Enter the content type name: ");
                    scanf("%s",name2);
                    for(j=0;j<content;j++){
                        if(strcmp(name2,contentname[j])==0){
                            index2=j;
                            break;
                        }
                    }
                    if(index2!=-99){
                        while(data2==true){
                            printf("\n\n1.Title\n2.Rating\n3.Runtime\n4.Encoding Format\n5.Exit Content data Update");
                            printf("\n\nEnter the number to update the content type of Category %s Content type %s: ",categoryname[index],contentname[index2]);
                            scanf("%d",&updatecontent);
                            if(updatecontent==1){
                                printf("\nEnter the new title for %s Content type in %s Category: ",contentname[index2],categoryname[index]);
                                scanf("%s",contentmetadata[index][index2].title);
                            }
                            else if(updatecontent==2){
                                printf("\nEnter the new Rating for %s Content type in %s Category: ",contentname[index2],categoryname[index]);
                                scanf("%f",&contentmetadata[index][index2].title);
                            }
                            else if(updatecontent==3){
                                printf("\nEnter the new Runtime for %s Content type in %s Category: ",contentname[index2],categoryname[index]);
                                scanf("%f",&contentmetadata[index][index2].title);
                            }
                            else if(updatecontent==4){
                                printf("\nEnter the new Encoding Format for %s Content type in %s Category: ",contentname[index2],categoryname[index]);
                                scanf("%s",contentmetadata[index][index2].title);
                            }
                            else if(updatecontent==5){
                                data2=false;
                            }
                            else{
                                printf("\nInvalid Option");
                            }
                        }
                    }
                    else{
                        printf("\nContent type does not exist");
                    }
                }
                else{
                    printf("\nCategory name does not exist");
                }
            }
            else if(updatedata==8) data=false;
            else printf("\nInvalid Option\n");
           }
        }
        else if(loopvar==3){
            loop=false;
        }
        else printf("\nEnter a valid value\n");            
    }
    free(username);
    free(categoryname);
    free(devicename);
    free(engagementMatrix);
    free(contentname);
    free(deviceMatrix);
    free(contentmetadata);
    return 0;
}