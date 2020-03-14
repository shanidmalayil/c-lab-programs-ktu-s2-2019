#include <stdio.h>
long int fact_nonrec(int n)
{ int i;
  long int f=1;
  for(i=1;i<=n;i++)
       f=f*i;
  return f;
}
long int fact_rec(int n)
{
  if(n==0){
  return 1;
  } 
  else{
  return (n*fact_rec(n-1));
  }
}
void main()
{int n;
  printf("Enter the number \n");
  scanf("%d",&n);
  printf("Factorial using non recursive function  %d !=%ld\n",n,fact_nonrec(n));
  printf("Factorial using     recursive function  %d !=%ld\n",n,fact_rec(n));
}
