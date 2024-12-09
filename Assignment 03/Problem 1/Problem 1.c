#include <stdio.h>
#include<stdbool.h>
typedef struct employee{
    int employeecode;
    char employeename[100];
    int date;
    int month;
    int year;
}employee;

bool valid_date(int date,int month,int year){
    if(month>=1 && month<=12 && date>0){

    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
        if(date<=31)
        return true;
        else
        return false;
    }
    else if(month==2){
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
            if(date<=29){
            return true;
            }
            else
            return false;
        }
        else{
            if(date<=28){
                return true;
            }
              else
            return false;
        }
    }
    else{
        if(date<=30)
    return true;
        else
         return false;
    }
    }
    else{
       return false;
    }
}
void assignvalues(employee *x){
    int y=0;
    printf("\nEnter the Employee Code: ");
    scanf("%d",&x->employeecode);
    printf("Enter the Employee Name: ");
    scanf(" %[^\n]",&x->employeename);
    while(y==0){
        printf("Enter the date (DD-MM-YYYY): ");
        scanf("%d-%d-%d",&x->date,&x->month,&x->year);
        if(valid_date(x->date,x->month,x->year)==true)
            y=1;
        else
        printf("Invalid Date\n");
    }
    
}
void print(employee x[],int n){
    printf("%-15s %-20s %-15s","Employee Code","Employee Name","Date of Joining");
    int i;
    printf("\n");
    for(i=0;i<n;i++){
        printf("%-15d %-20s %d-%d-%d\n",x[i].employeecode,x[i].employeename,x[i].date,x[i].month,x[i].year);
    }
}
float sub(int d,int m,int y,int date,int month,int year){
        float rd,rm,ry,total;
        ry=y-year;
        if(m<month){
            ry=ry-1;
            rm=(m+12)-month;
        }
        else {
            rm=m-month;
        }
        if(d<date){
            if(m-1==1 || m-1 || 3 || m-1 ==7 || m-1==8 || m-1==10||m-1==12){
                rd=(d+31)-date;
                rm--;
            }
            else if(m-1==2){
                if((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)){
                    rd=(d+29)-date;
                    rm--;
                }
            }
            else{
                rd=(d+30)-date;
                rm--;
            }
        }
        else{
            rd=d-date;
        }
        return total=ry+(rm/12)+(rd/365);
    }

int main() {
    int i,j=0,d,m,y,count=0,n;
    float tenure;
    printf("Enter the number of employees: ");
    scanf("%d",&n);
    int arr[100];
    employee employees[100];
    for(i=0;i<n;i++){
        assignvalues(&employees[i]);
    }
    printf("\n");
    print(employees,n);
    while(j==0){
        printf("\nEnter Current date: ");
        scanf("%d-%d-%d",&d,&m,&y);
        
        if(valid_date(d,m,y)==true){
            for(i=0;i<1;i++){
                if(y<employees[i].year);
                else if(y>employees[i].year){ j=1; break;}
                else if(y==employees[i].year){
                    if(m<employees[i].month);
                    else if (m>employees[i].month) {j=1; break;}
                    else if(m==employees[i].month){
                        if(d<employees[i].month);
                        else if(d>=employees[i].date) {j=1; break;}
                    }
                }
            }
        }
        else printf("Invalid Date\n");
    }
    count=0;
    for(i=0,j=0;i<n;i++){
        tenure= sub(d,m,y,employees[i].date,employees[i].month,employees[i].year);
        if(tenure>3){
          arr[j]=i;
          j++; 
          count++;
        }
    }
    printf("\nThe Number of Employees with tenure greater than 3 are: %d",count);
    printf("\n\n");
    for(i=0;i<count;i++){
        printf("%-15d %-20s %d-%d-%d\n",employees[arr[i]].employeecode,employees[arr[i]].employeename,employees[arr[i]].date,employees[arr[i]].month,employees[arr[i]].year);
    }
    return 0;
}