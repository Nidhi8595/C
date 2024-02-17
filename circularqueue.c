#include<stdio.h>
int max=5;
int arr[5];
int item;
int f=-1;
int r=-1;
void insert(int item)
{
    if(f==0 && r==max-1)
    {
      printf("Overflow\n");
      return;  
    }
    if(f==r+1)
    {
       printf("Overflow\n");
       return; 
    }
    if(f==-1)
    {
        f=0;
        r=0;
    }
    else if(r==max-1)
    {
        r=0;
    }
    else
    {
        r=r+1;
    }
    arr[r]=item;
}
void delet()
{
    if(f==-1 && r==-1)
    {
        printf("Underflow\n");
        return;
    }  
    item=arr[f];
    if(f==r)
    {
        f=-1;
        r=-1;
    }
    else if(f==max-1)
    {
        f=0;
    }
    else
    {
        f=f+1;
    }
    printf("Deleted element\t%d\n",item);
}
void display()
{
    if(f==-1 && r==-1)
    {
        printf("Empty Queue");
        return;
    }
    else if(f<=r)
    {
        for(int i=f;i<=r;i++)
        printf("%d ",arr[i]);
    }
    else{
        for(int i=0;i<=max-1;i++)
        printf("%d ",arr[i]);
    }
}
int main()
{
    int c;
    do
    {
    printf("\n1.Insertion\n2.Deletion\n3.Display\n4.Exit\n");
    printf("Enter your choice\t");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        {
            printf("Enter the element to insert\t");
            scanf("%d",&item);
            insert(item);
            break;
        }
        case 2:
        {
            delet();
            break;
        }
        case 3:
        {
            printf("Elements in the Queue\n");
            display();
            break;
        }
        case 4:
        {
          printf("\n---------END----------");
          break;
        }
        default:
        {
            printf("Invalid");
            break;
        }
    }
    }
    while(c!=4);
    return 0;
}