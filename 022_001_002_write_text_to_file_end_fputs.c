//i) Write data to the file( as strings using fputs function)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
FILE *fp;
char t[80];
fp=fopen("a.txt","w");
if(fp==NULL)
  {
  printf("Error opening file..");
  exit(1);
   }
printf("Enter strings...type end to stop\n");
do{
   fgets(t,80,stdin);
   if(strcmp(t,"end\n")==0 ) break;
   fputs(t,fp);
  }
while(1);
fclose(fp);
}
