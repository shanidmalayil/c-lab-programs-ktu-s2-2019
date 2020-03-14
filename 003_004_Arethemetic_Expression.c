#include<stdio.h>
void main(){
	float a,b,c,d,e,f,g,result;
	printf("Enter the values of a,b,c,d,e,f,g :");
	scanf("%f%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f,&g);
	result=(a-b/c*d+e)*(f+g);
	printf("Result = %f",result);
	
}
