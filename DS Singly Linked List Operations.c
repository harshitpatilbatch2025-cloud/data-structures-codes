#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* head = NULL;


void insert(int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        struct Node* temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    printf("Inserted %d\n", data);
}


void deleteNode(int position)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    struct Node* temp = head;

    if (position == 0)
    {
        head = temp->next;
        free(temp);
        printf("Deleted\n");
        return;
    }

    struct Node* prev = NULL;

    for (int i = 0; i < position; i++)
    {
        prev = temp;
        temp = temp->next;

        if (temp == NULL)
        {
            printf("Invalid position\n");
            return;
        }
    }

    prev->next = temp->next;
    free(temp);
    printf("Deleted\n");
}


void reverse()
{
    struct Node* prev = NULL;
    struct Node* current = head;
    struct Node* next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;

    printf("List Reversed\n");
}


void display()
{
    struct Node* temp = head;

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main()
{
    int choice;
    int data;
    int position;

    while (1)
    {
        printf("\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Reverse\n");
        printf("4. Display\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                insert(data);
                break;

            case 2:
                printf("Enter position: ");
                scanf("%d", &position);
                deleteNode(position);
                break;

            case 3:
                reverse();
                break;

            case 4:
                display();
                break;

            case 5:
                printf("Exiting...\n");
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
