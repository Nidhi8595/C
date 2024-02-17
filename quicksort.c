#include<stdio.h>
void quicksort(int num[25],int f,int l)
{
    int i,j,pivot,t;
    if(f<l)
    {
        pivot=f;
        i=f;
        j=f;
        while(i<j)
        {
            while(num[i]<=num[pivot]&&i<l)
            i++;
            while(num[j]>num[pivot])
            j--;
            if(i<j)
            {
                t=num[i];
                num[i]=num[j];
                num[j]=t;
            }
        }
        t=num[pivot];
        num[pivot]=num[j];
        num[j]=t;
        quicksort(num,f,j-1);
        quicksort(num,j+1,l);
    }
}
int main()
{
    int i,count,num[25];
    printf("How many elements are you going to enter?:");
    scanf("%d",&count);
    printf("Enter %d elements:\n",count);
    for(i=0;i<count;i++)
    {
        scanf("%d",&num[i]);
    }
    quicksort(num,0,count-1);
    printf("Order of Sorted elements:\n");
    for(i=0;i<count;i++)
    printf("%d ",num[i]);
    return 0;
}