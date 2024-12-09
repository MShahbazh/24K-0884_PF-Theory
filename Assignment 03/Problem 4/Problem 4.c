#include<stdio.h>
#include<stdlib.h>
   typedef struct{
        int* ratings;
        int totalScore;
    }Employee;

void inputEmployees(int** ratings,int numEmployees, int numPeriods){
    int i,j;
    for(i=0;i<numEmployees;i++){
        ratings[i]=(int*)malloc(numPeriods*sizeof(int));
        printf("Employee %d\n",i+1);
        for(j=0;j<numPeriods;j++){
            printf("Evaluate %d: ",j+1);
            scanf("%d",&ratings[i][j]);
        }
        printf("\n");
    }
}

void displayPerformance(int** ratings, int numEmployees, int numPeriods){
    int i,j;
    for(i=0;i<numEmployees;i++){
        printf("Employee %d\n",i+1);
        for(j=0;j<numPeriods;j++){
            printf("Rating of Period %d: %d\n",j+1,ratings[i][j]);
        }
        printf("\n");
    }
}

int findEmployeeOfTheYear(int** ratings,int numEmployees, int numPeriods){
    int i,j,max=0,count=0,arr[numEmployees],index=0;
    for(i=0;i<numEmployees;i++){
        for(j=0;j<numPeriods;j++){
            count+=ratings[i][j];
        }
        count=count/numPeriods;
        if(count>max){
            max=count;
            index=i;
        }
    }
    return index;
}

int findHighestRatedPeriod(int** ratings,int numEmployees, int numPeriods){
    int i,j,max=0,count=0,arr[numEmployees],index=0;
    for(i=0;i<numEmployees;i++){
        for(j=0;j<numPeriods;j++){
            count+=ratings[i][j];
        }
        count=count/numEmployees;
        if(count>max){
            max=count;
            index=i;
        }
    }
    return index;
}

int findWorstPerformingEmployee(int** ratings,int numEmployees, int numPeriods){
    int i,j,min=0,count=0,arr[numEmployees],index=0;
    for(i=0;i<numEmployees;i++){
        for(j=0;j<numPeriods;j++){
            count+=ratings[i][j];
        }
        count=count/numPeriods;
        if(min==0){
            min=count;
        }
        else{
            if(count<min){
                min=count;
                index=i;
            }
        }
    }
    return index;
}

int main(){
    int n,p,i,j;
    printf("Enter the Number of Employees: ");
    scanf("%d",&n);
    printf("Enter the Period: ");
    scanf("%d",&p);
    Employee* Employees=(Employee*)malloc(n*sizeof(Employee));
    int** ratings=(int**)malloc(n*sizeof(int*));
    inputEmployees(ratings,n,p);
    for(i=0;i<n;i++){
        Employees[i].ratings=ratings[i];
        Employees[i].totalScore=0;
        for(j=0;j<p;j++){
            Employees[i].totalScore+=Employees[i].ratings[j];
        }
    }
    displayPerformance(ratings,n,p);
    printf("Maximum of Average rating is of employee at index %d\n",findEmployeeOfTheYear(ratings,n,p));
    printf("Highest of Average rating across all employee is at index %d\n",findHighestRatedPeriod(ratings,n,p));
    printf("Worst Performing Employee is at index %d", findWorstPerformingEmployee(ratings,n,p));


    free(ratings);
    free(Employees);
    return 0;
}