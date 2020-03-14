#include<stdio.h>
void main()
{	int i,j,length,p=1;	
	char s1[100],rev_s1[100];	
	printf("enter the string ; ");scanf("%s",s1);
	
	printf("the string is : %s",s1);	
	
	//find length of string
	for(i=0;s1[i]!='\0';i++	){} //end of loop
	
	printf("\nLength of string is = %d ",i);
	length=i;
	//copy reverse of s1[] to rev_s1[]
	j=length-1;//  rev_s1[j==4 --]<== s1[i=0 ++]
	for(i=0;i<length;i++){
	 rev_s1[j--]=s1[i];		//rev_s1[8]=s1[0]
	}	
	rev_s1[i]='\0'; //add null charachter at end of second string
	printf("\n REverse String is %s",rev_s1);
	
	//check palindrom or not by comparing each
	//charachters in both the char array
	for(i=0;s1[i]!='\0';i++){
		if(s1[i]!=rev_s1[i]){
			p=0;printf("Not a Palindrom");break;
		}	
	}
	if(p==1)printf("Is Palindrom");
}//end of main

