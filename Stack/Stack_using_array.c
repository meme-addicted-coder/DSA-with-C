#include<stdio.h>
#include<stdlib.h>
#define s 10
int top=-1;
int arr[s];

void push(int ele)
{
  if (top==s-1)
  {
    printf("Overflow! \n");
  }
  else
  { top++;
    arr[top]=ele;
  }
}

void pop()
{
  if(top==-1)
  {
    printf("Underflow!!\n");
  }
  else
  {
    top--;
  }
}

int topele()
{
 printf("%d is the top element\n",arr[top]); 
}

int display()
{
 printf("The elements in the stack are:\n");
 if(top==-1)
  {
    printf("Underflow!!\n");
  }
  else{
  for(int i=top;i>=0;i--)
    { 
      printf("%d \n",arr[i]);
    }
  }
}


int main()
{
  printf("CHOOSE FROM THE FOLLOWING STACK OPERATIONS....");
  printf("\n 1.Push an element \n 2.Pop an element \n 3.Top element \n 4.Display the stack \n 5.Exit \n ");
  while(1)
    { int ch,ele;
      printf("your option:");
      scanf("%d",&ch);
      switch(ch)
        {
          case 1:  printf("Enter the element:");
                   scanf("%d",&ele);
                   push(ele);
                   break;
          case 2:  pop();
                   break;
          case 3:  topele();
                   break;
          case 4:  display();
                   break;
          case 5:  exit(1);
          default:  printf("Invalid option!! \n");
        }
    }
return 1; 
}
