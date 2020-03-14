#include <stdio.h>
int main()
{
    int arr[100];
    int n, i;
    int * ptr = arr;    // Pointer to arr[0]
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements in array:\n");
    for (i = 0; i < n; i++)
    {
        // (ptr + i) is equivalent to &arr[i]
        scanf("%d", (ptr + i)); 
    }

    printf("Array elements: \n");
    for (i = 0; i < n; i++)
    {
        // *(ptr + i) is equivalent to arr[i]
        printf("%d\n", *(ptr + i));
    }
  }
/*Note: You can use dynamic memory allocation  for array using pointers
using the following definition int *ptr=(int *)malloc(sizeof(int));
*/
