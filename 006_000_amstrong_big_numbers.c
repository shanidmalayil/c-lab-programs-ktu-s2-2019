#include<stdio.h>
#include<math.h>
void main()
{
	unsigned long long int i;
	for(i=0;i<18446;i++){
		if(checkamstrong(i)==1)printf("\t %lld",i);		
	}
}

int checkamstrong(unsigned long long int n)
{
	unsigned long long int i,t,lastdigit,sumofCube=0;
	t=n;
	while(t!=0)
	{
		lastdigit=t%10;
		sumofCube=sumofCube+pow(lastdigit,3);
		//printf(" %lf,",pow(lastdigit,3));		
		t=t/10;
	}
	//printf("Sum of Cube = %d",sumofCube);
	if(sumofCube==n)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

