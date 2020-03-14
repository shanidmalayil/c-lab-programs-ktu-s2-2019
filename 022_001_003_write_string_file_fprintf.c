//i) Write data to the file( as strings using fprintf)
#include <stdio.h>
#include <stdlib.h>
int main()
{
FILE *fp;
fp=fopen("a.txt","w");
if (fp==NULL)
  {
    printf("error opening file..\n");
    exit(1);
   }
else
  {
   fprintf(fp,"%s","Welcome\n");
   fprintf(fp,"%s","to file handling in C\n");
   }
fclose(fp);
}

