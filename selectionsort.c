#include<stdio.h>
int main()
{
    int a[100],n,i,j,pos,t;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter %d integer's\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<(n-1);i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(a[pos]>a[j])
            pos=j;
        }
        if(pos!=i)
        {
            t=a[i];
            a[i]=a[pos];
            a[pos]=t;
        }
    }
    printf("The sorted array in ascending order:\n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);

    return 0;
}