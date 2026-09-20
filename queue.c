#include <stdio.h>
#define MAX 5

int stack[MAX], top = -1;
int queue[MAX], front = -1, rear = -1;

/* Stack Functions */
void push(int value)
{
    if (top == MAX - 1)
        printf("Stack Overflow\n");
    else
    {
        top++;
        stack[top] = value;
        printf("%d pushed into stack\n", value);
    }
}

void pop()
{
    if (top == -1)
        printf("Stack Underflow\n");
    else
    {
        printf("%d popped from stack\n", stack[top]);
        top--;
    }
}

void displayStack()
{
    int i;

    if (top == -1)
        printf("Stack is empty\n");
    else
    {
        printf("Stack elements: ");
        for (i = top; i >= 0; i--)
            printf("%d ", stack[i]);
        printf("\n");
    }
}

/* Queue Functions */
void enqueue(int value)
{
    if (rear == MAX - 1)
        printf("Queue Overflow\n");
    else
    {
        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = value;
        printf("%d inserted into queue\n", value);
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
        printf("Queue Underflow\n");
    else
    {
        printf("%d deleted from queue\n", queue[front]);
        front++;

        if (front > rear)
            front = rear = -1;
    }
}

void displayQueue()
{
    int i;

    if (front == -1)
        printf("Queue is empty\n");
    else
    {
        printf("Queue elements: ");
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

int main()
{
    int choice, value;

    while (1)
    {
        printf("\n--- STACK AND QUEUE ---\n");
        printf("1. Push (Stack)\n");
        printf("2. Pop (Stack)\n");
        printf("3. Display Stack\n");
        printf("4. Enqueue (Queue)\n");
        printf("5. Dequeue (Queue)\n");
        printf("6. Display Queue\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value: ");
            scanf("%d", &value);
            push(value);
            break;

        case 2:
            pop();
            break;

        case 3:
            displayStack();
            break;

        case 4:
            printf("Enter value: ");
            scanf("%d", &value);
            enqueue(value);
            break;

        case 5:
            dequeue();
            break;

        case 6:
            displayQueue();
            break;

        case 7:
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }
}