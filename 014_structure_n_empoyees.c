#include<stdio.h>
#include<string.h>
void main()
{   
	int n,i;
	struct employee{
		char name[100];
		int employee_id;
		double salary;
	};
	
	struct employee emp[100];
	
	printf("Enter number of employees");
	scanf("%d",&n);
	
	//read details of employee
	for(i=0;i<n;i++){
		printf(" \n Sl No: %d ",i);
		printf("Enter Name :");scanf("%s",emp[i].name);
		printf("Enter Employee Id :");scanf("%d",&emp[i].employee_id);
		printf("Enter Salary :");scanf("%lf",&emp[i].salary);		
	}
		//show details of employees
		for(i=0;i<n;i++){
		printf(" \n Sl No: %d ",i);
		printf("\tName :");printf("%s",emp[i].name);
		printf("\tEmployee Id :");printf("%d",emp[i].employee_id);
		printf("\tSalary :");printf("%lf",emp[i].salary);		
	}
}



