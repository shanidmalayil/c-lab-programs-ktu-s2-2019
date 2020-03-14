/* Largest of Three*/
#include<stdio.h>
void main()
{
	int x,y,z;
	printf("Enter three numbers :");
	scanf("%d%d%d",&x,&y,&z);
		
	if(x>y && x>z) // x is largest?
	{
		printf("%d is the largest",x);
	}	
	else if(y>x && y>z) //y is largest?
	{
		printf("%d is the largest",y);
	}
	else if(z>x && z>y)// z is the largest 
	{
		printf("%d is the largest",z);
	}//end of if-else-if-ladder	
}//end of main

