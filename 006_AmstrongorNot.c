#include<stdio.h>
#include<math.h>
void main()
{
	int n,x,digit,Sum=0,SumOfCube=0;
	printf("Enter num");scanf("%d",&n);
	x=n;
	while(x!=0)
	{
	digit=x%10;
	Sum =Sum+digit;
	SumOfCube=SumOfCube+pow(digit,3);
	printf("Digit =%d",digit);
	x=x/10;		
	}
	printf("Sum is =%d",Sum);
	printf("SumOfCube is =%d",SumOfCube);	
	if(SumOfCube==n){
	
		printf("%d is an Amstrong number");
	}else{
			printf("%d is not an Amstrong number");
	}	
}

