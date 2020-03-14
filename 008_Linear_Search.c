#include<stdio.h>
//linear Search
void main(){
    int x[1000],i,n,search,f=0;// //0,1,2,3,4 integer array
    printf("Enter limit");scanf("%d",&n);
    printf("enter %d value: ",n);
    for(i=0;i<n;i=i+1){
        scanf("%d",&x[i]);
    }
    printf("Enter the value to be searched");
    scanf("%d",&search);

    for(i=0;i<n;i++){
        if(x[i]==search){
            f=1;
            printf("Element found at %d position ",i+1);
            break;
        }
    }//end of loop
    if(f==0){
        printf("\n Element not Found");
    }
}//endofmain


