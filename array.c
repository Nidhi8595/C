#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the size of array -> ");
    scanf("%d", &n);
    int arr[n];                 // declaration
    // int arr[]={1,2,3,4,5}    // direct initialization
    printf("Enter elements -> \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);      // taking user input
    }
    printf("Array elements are -> ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);      // printing the array
    }
    printf("\n");
    printf("Element at 3rd index -> %d\n", arr[3]);
    arr[3] = 7;             // changing value at any index
    printf("Updated Element at the 3rd index -> %d", arr[3]);
    return 0;
}
