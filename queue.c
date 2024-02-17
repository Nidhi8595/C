#include <stdio.h>
#include <stdlib.h>
#define m 3 // max size
void insert();
void del();
void display();
int f = -1, r = -1; // initializing front and rear pointer
int queue[m];
int main()
{
    int c;
    while (c != 4)
    {
        printf("1.Insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");
        printf("Enter your choice -> ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
        {
            insert();
            break;
        }
        case 2:
        {
            del();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            break;
        }
        default:
        {
            printf("\nEnter valid choice!!\n");
        }
        }
    }
    return 0;
}
void insert()
{
    int it;
    printf("Enter the element -> ");
    scanf("%d",&it);
    if (r == (m - 1)) // rear pointer at the end position
    {
        printf("OVERFLOW\n");
        return;
    }
    if ((f == -1) && (r == -1)) // for empty queue
    {
        f = 0;
        r = 0;
    }
    else // for other cases
    {
        r = r + 1;
    }
    queue[r] = it;
    printf("Value inserted\n");
}
void del()
{
    int item;
    if (f == -1 || f > r)
    {
        printf("UNDERFLOW\n");
        return;
    }
    else
    {
        item = queue[f];
        if (f == r) // when only one element left in queue
        {
            f = -1;
            r = -1;
        }
        else // other cases
        {
            f = f + 1;
        }
        printf("Value deleted\n");
    }
}
void display()
{
    int i;
    if (r == -1)
    {
        printf("Empty queue\n");
    }
    else
    {
        printf("The elements in the QUEUE are ->\n");
        for (i = f; i <= r; i++)
        {
            printf("%d\n", queue[i]);
        }
    }
}