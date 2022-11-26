//This code is written by Aayush
//This a easiest code of insertion and display the list elements
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// Function Declaration
struct node *start=NULL;
struct node *create_LL(struct node *);
struct node *display_LL(struct node *);

int main()
{
    int choice;

    do
    {
        printf("\n********MAIN MENU********");
        printf("\n Choose 1 : To create a list");
        printf("\n Choose 2 : To display the list");
        printf("\n Choose 3 : For Exit");
        printf("\n********END MENU********");

        printf("\nEnter your choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1 : start=create_LL(start);
            printf("Link List Created");
            break;

            case 2 : start=display_LL(start);
            break;
        }
    }

    while(choice!=3);
    return 0;
}

struct node *create_LL(struct node *start)
{
    struct node *new_node;
    int dta;

    printf("\nEnter -1 to End");
    printf("\nEnter the data for the node");
    scanf("%d", &dta);

    while(dta!=-1)
    {
        new_node = (struct node *)malloc(sizeof(struct node *));

        if(start ==NULL)
        {
            new_node->next = NULL;
            new_node->data = dta;
            start = new_node;
        }

        else
        {
            new_node->next = start;
            new_node->data = dta;
            start = new_node;
        }

        printf("\nEnter -1 to End");
        printf("\nEnter the data for the node");
        scanf("%d", &dta);   
    }
    return start;
}

struct node*display_LL(struct node*start)
{
    struct node*ptr;
    ptr = start;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    return start;
}
