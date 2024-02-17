#include<stdio.h>
int main()
{
    int n,i,s,a[100];
    printf("Emter the no. of elements in array\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element you want to search: ");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            printf("%d is present at location %d/index %d\n",s,i+1,i);
            break;
        }
    }
    if(i==n)
    {
            printf("%d is not present in the array!\n",s);        
    }
    return 0;
}