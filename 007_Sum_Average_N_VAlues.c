#include<stdio.h>
void main()
{
        int x[1000],i,n,S=0;
        printf("\nenter limit");scanf("%d",&n);

        printf("\nenter %d values :",n);
        for(i=0;i<n;i++){
            scanf("%d",&x[i]) ;
        }//show values and do sum
         for(i=0;i<n;i++){
                S=S+x[i];
             printf("\n%d",x[i]);
        }
        printf("Sum=%d",S);
        printf("Average =%f",(float)S/n);
}
