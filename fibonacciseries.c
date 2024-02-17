#include<stdio.h>
int main()
{
    int n,i,t1=1,t2=1,next=2;
    printf("Enter the no. of terms\n");
    scanf("%d",&n);
    printf("Fibonacci series of %d elements:\n%d %d %d ",n,0,1,1);
    for(i=4;i<=n;i++)
    {
        printf("%d ",next);
        t1=t2;
        t2=next;
        next=t1+t2;
    }
    return 0;
}





