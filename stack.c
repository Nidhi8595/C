#include <stdio.h>
#include<stdlib.h>
int stack[50],s,t;
void push(void);
void pop(void);
void display(void);
int main()
{
  int c;
  t=-1;    // initializing top pointer
  printf("Enter the size for STACK -> ");
  scanf("%d", &s);
  printf("STACK OPERATIONS:-\n");
  printf("Press 1 to PUSH\n");
  printf("Press 2 to POP\n");
  printf("Press 3 to DISPLAY\n");
  printf("Press 4 to EXIT\n");
  do {
    printf("Enter Your Choice -> ");
    scanf("%d", &c);
 
    switch (c)
    {
      case 1:
        {
          push();   //calling PUSH() Function
          break;
        }
 
      case 2:
        {
          pop();    //calling POP() Function
          break;
        }
 
      case 3:
        {
          display();  //calling DISPLAY() Function
          break;
        }
 
      case 4:
        {
          printf("---------END----------");
          break;
        }
 
      default:
        {
          printf("\nWrong Choice.");
        }
    }
  }while (c != 4);
  return 0;
}
void push()
{
  int x;
 //Check if STACK is FULL or NOT
  if (t >= s - 1)
  {
    printf("STACK is OVERFLOW\n");
  }
  else
  {
    printf("Enter an Integer that you want to insert -> ");
    scanf("%d", &x);
    t++;        // increasing the position of top pointer
    stack[t] = x;
  }
} 
void pop()
{
   //Check if STACK is EMPTY or NOT
  if (t <= -1)
  {
    printf("STACK is UNDERFLOW\n");
  }
  else
  {
     //displaying removed element from top of a STACK
    printf("The popped(removed) elements is %d\n", stack[t]);
    t--;        // decreasing the position of top pointer
  }
}
void display()
{
  int i;
  if (t >= 0)
  {
    printf("The Elements present in STACK are ->\n");
 
    for (i = t; i >= 0; i--) // traversing from top pointer till bottom
    {
      printf("%d\n", stack[i]);
    }
  }
  else
  {
    printf("The STACK is empty\n");
  }
}
