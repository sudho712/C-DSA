#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;
void beginsert();
void lastinsert();
void random_insert();
void begin_delete();
void last_delete();
void random_delete();
void random_delete();
void display();
void search();

 int main()
 {
    int choice=0;
    while(choice!=9)
    {
        printf("\n.. Choose one option from the following list...\n");
        printf("\n 1.Insert in beg.\n2. insert at last\n 3. Insert at item at any location\n4.Delte from beg\n 5.delete from last\n6. delete item form any location\n7. Search\n 8. Show\n 9.Exit ");

        printf("\n Enter your choice");
        scanf("\n %d",&choice);

        switch(choice)
        {
            case 1:
                beginsert();
                break;
            case 2:
                lastinsert();
                break;
            case 3:
                random_insert();
                break;
            case 4:
                begin_delete();
                break;
            case 5:
                last_delete();
                break;
            case 6:
                random_delete();
                break;
            case 7:
                search();
                break;
            case 8:
                display();
                break;
            case 9:
                exit(0);
                break;

                default:


        }
    }
 }