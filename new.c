#include <stdio.h>

char queue[100];
int front=-1, rear=-1, size;
char isFull()

{
if((rear+1)%size == front)
{
return 1;
}
else
{
return 0;
}
}

char isEmpty()
{
if(front == -1 && rear == -1)
{
return 1;

}
else
{
return 0;
}
}

void enqueue(char element)
{
if(isFull())
{
printf("Queue is full!!");
}
else if(isEmpty())
{
front = 0;
rear = 0;
queue[rear] = element;
printf("%c is enqueued \n", element);
}
else
{
rear = (rear+1)%size;
queue[rear] = element;
printf("%c is enqueued \n", element);
}
printf("front = %d, rear = %d\n", front, rear);
}

void dequeue()
{
if(isEmpty())
{
printf("Queue is empty");
}
else if(front == rear)
{
printf("c is dequeued \n", queue[front]);
front = -1;
rear = -1;
}
else
{
printf("%c is dequeued \n", queue[front]);
front = (front+1)%size;
}
printf("front = %d, rear = %d\n", front, rear);
}

char main()
{
printf("Enter queue size:\n");
scanf("%d",&size);
enqueue('A');
enqueue('B');
enqueue('C');
enqueue('D');
dequeue();

return 0;
}