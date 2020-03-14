#include<stdio.h>
void main()
{
	int n,i=2,f=0; //f==0 shows number is prime
	printf("Enter the value");scanf("%d",&n);
	while(i<=n/2)
	{
		if(n%i==0)	//if n%i==0 then not prime
		{
			f=1;//f==1 shows number is not prime
			printf("\n Number is not prime");
			break;
		}//end of if
		i=i+1;
	}//end of while-loop	
	if(f==0) //there is no change in val of f 
	{
		printf("\n Number is prime");
	}	
}

