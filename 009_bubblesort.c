#include<stdio.h>
// Driver program to test above functions
void main()
{   int arr[1000],n,i,j,temp=0;
    printf("Enter the limit");
    scanf("%d",&n);
    //Read the elements
    printf("\n Enter the elements to insert into Array : ");
    for(i=0;i<n;i++){scanf("%d",&arr[i]);}

    printf("\n Unsorted Array : \n");
    for(i=0;i<n;i++){printf("\t%d",arr[i]);}

    //Bubble Sort Program
     for (i=0; i<n-1;i++){
       for (j=0; j<n-i-1; j++){
            if (arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\n Sorted Array : \n");
    for(i=0;i<n;i++){printf("\t%d",arr[i]);}
}

