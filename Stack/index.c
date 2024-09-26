#include<stdio.h>
#define MAX_SIZE 
int stack[MAX_SIZE]
int top=-1;

void push(int item)
{
    if (top== MAX_SIZE -1 )
    {
        printf("Over Flow And Exit \n");
    }
    else
    {
        stack[top++]= item;
        printf("%d Item Inserted. \n", item);
    }
}

void pop()
{
    if(top==-1)
    {
        printf("Under Flow And Exit \n");        
    }
    else
    {
        int item=stack[top--];
        printf("%d Item Delated. \n",item);
    }    
}

void display()
{
    if(top==-1)
    {
        printf("Stack is empty. \n");
    }
    else
    {
        printf("Stack Element");
    }
}
int main()
{
    int choice , item;
    printf("1. Push \n 2. pop \n 3. Display \n 4. Exit \n");
    while (1)
    {
        printf("Enter Your Choice :");
        scanf("%d",choice);

        switch(choice)
        {
            case 1:
                printf("Enter Value to push in stack : ");
                scanf("%d",item);
                push(item);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice ! \n");
        }
    }
    
}