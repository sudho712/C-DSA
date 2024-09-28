#include <stdio.h>
#define MAX_SIZE 100
int queue[MAX_SIZE];
int front = -1, rear = -1;
int main()
{
    int choice, item;
    printf("1. Enqueue\n 2. dequeue\n 3.display\n 4.exit");
    while (1)
    {
        printf("Enter your choice");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if (rear == MAX_SIZE - 1)
            {
                printf("Overflow");
            }
            else
            {
                printf("Enter the Element");
                scanf("%d", &item);
                if (front == -1)
                {
                    front = rear = 0;
                }
                else
                {
                    rear++;
                }
                queue[rear] = item;
                printf("Item Inserted Sucesfully\n");
            }
            break;

        case 2:
            if (front == -1)
            {
                printf("Under Flow And Exit \n");
            }
            else
            {
                item = queue[front];
                if (front == rear)
                {
                    front = rear = -1;
                }
                else
                {
                    front++;
                }
                printf("Item Deleted:\n");
            }
            break;
        case 3:
            if (front == -1)
            {
                printf("Queueis empty \n");
            }
            else
            {
                printf("Queue Elements :");
                for (int i = front; i <= rear; i++)
                {
                    printf("%d", queue[i]);
                }
                printf("\n");
            }
        case 4:
            printf("Exit\n");
            return 0;

        default:
            printf("invalid");
        }
    }
}