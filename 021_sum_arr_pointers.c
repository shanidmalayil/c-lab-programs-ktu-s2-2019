#include <stdio.h>
#include <stdlib.h>
int arraysum(int *ptr,int n)
{
 int sum=0,i;
for (i = 0; i < n; i++)
    {
        // *(ptr + i) is equivalent to arr[i]
        sum=sum+ *(ptr + i);
    }
 return sum;
}
int main()
{
    int arr[]={4,5,6,7,8,9,10,1,2,3};
    int  sum;
    sum=arraysum(arr,10);
    printf("Array elements sum=:%d \n",sum);
}
