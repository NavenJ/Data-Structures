#include <stdio.h>
struct employee
{
    char name[20];
    int age, phonenumber, salary;
};
int main()
{
	struct employee emp;
    printf("\nEnter details :\n");
    printf("Name :"); 
	gets(emp.name);
    printf("Age:");    
	scanf("%d",&emp.age);
	printf("Phone number :");
	scanf("%d",&emp.phonenumber);
    printf("Salary :");        
	scanf("%d",&emp.salary);
    printf("\nEntered detail is : \n");
    printf("Name : %s\n",emp.name);
    printf("Age : %d\n",emp.age);
    printf("Phone number : %d\n",emp.phonenumber);
    printf("Salary: %d\n",emp.salary);
    return 0;
}
