include <stdio.h>
typedef struct{
 
    char name[30];
    int age;
    int phonenumber
    int salary;
 
} Employee;
 
int main()
{
    int i, n=20;
    Employee employees[n];
    printf("Enter %d Employee Details \n",n);
    for(i=0; i<n; i++){
    printf("Name: ");
    scanf("%s",employees[i].name);
    printf("age: ");
    scanf("%d",&employees[i].age);
    printf("phonenumber: ");
    scanf("%d",&employees[i].phonenumber);
    printf("salary:");
     scanf("%d",&salary[i].salary
    printf("\n");
    }
    for(i=0; i<n; i++){
    printf("Name \t: ");
    printf("%s \n",employees[i].name);
     printf("age \t: ");
     printf("%d \n",employees[i].age);
     printf("phonenumber \t: ");
     printf("%d \n",employees[i]. phonenumber);
     printf("salary \t:");
     printf("%d \n",employees[i].salary);
     printf("\n");
    }
 
