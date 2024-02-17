#include<stdio.h>
int main()
{
    int a[100],i,n,key,first,last,mid;
    printf("Enter the size of array ");
    scanf("%d",&n);
    printf("Enter the elements of the array ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the element to search ");
    scanf("%d",&key);
    first=0;
    last=n;
    mid=(first+last)/2;
    while(first<=last)
    {
        if(a[mid]<key)
        {
            first=mid+1;
        }
        else if(a[mid]==key)
        {
            printf("Element found at the location %d",mid);
            break;
        }
        else
            last=mid-1;
            mid=(first+last)/2;
        
    }
    if(first>last)
    {
        printf("Element not found");
    }
    return 0;
}