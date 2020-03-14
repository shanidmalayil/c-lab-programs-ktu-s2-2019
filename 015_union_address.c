#include<stdio.h>
#include<string.h>
#define C_SIZE 20
void main()
{   
	int n,i;
	union address{
		char Name[C_SIZE];
		char House_Name[C_SIZE];
		char City_Name[C_SIZE];
		char State[C_SIZE];
		char Pin_code[C_SIZE];
	};
	
	union address person1;
	
	printf("Enter Address of person ");
	
	//read details of employee
	printf("Enter Name :");scanf("%s",person1.Name);
	printf("Enter House_Name :");scanf("%s",person1.House_Name);
	printf("Enter City_Name :");scanf("%s",person1.City_Name);
	printf("Enter State :");scanf("%s",person1.State);
	printf("Enter Pin_code :");scanf("%s",person1.Pin_code);
	
	//show details
	printf("\n \b Address details");
	printf("\n Name         : %s",person1.Name);
	printf("\n House Name   : %s",person1.House_Name);
	printf("\n City_Name    : %s",person1.City_Name);
	printf("\n State        : %s",person1.State);
	printf("\n Pin_code     : %s",person1.Pin_code);
	//Note: it is noted that the program will print only Pin because the union will hold only one value at a time .

}



