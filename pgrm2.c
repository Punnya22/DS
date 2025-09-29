#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int que[SIZE],front=0,rear=0;
void main()
{
void enque(int);
int opt,item,ans;
int deque();
void display();
int search(int);
while(1)
{
printf("\n1.Insert \n2.Delete \n3.Display \n4.Search \n5.Exit \n");
printf("Your potion : ");
scanf("%d",&opt);
switch(opt)
{
case 1: printf("Item to insert : ");
        scanf("%d",&item);
        enque(item);
        break;
case 2: item=deque();
        printf("Deleted item = %d",item);
        break;
case 3: display();
        break;
case 4: printf("Item to search : ");
        scanf("%d",&item);  
        ans=search(item);
        if(ans==1)
        printf("Founded....");
        else
        printf("Not founded....");
        break;
case 5: exit(0);
}
} 
//end of while
}
//function to insert an item to circular queue
void enque(int data)
{
int r1;
r1=(rear+1)%SIZE;
if(r1==front)
printf("Queue is full ");
else
{
rear=r1;
que[rear]=data;
}
return;
}
//function to delet an item from queue
int deque()
{
if(front==rear)
{
printf("Empty queue ");
exit(1);
}
else
{
front=(front+1)%SIZE;
return que[front];
}
}
//function to display queue contents
void display()
{
int f=front,r=rear;
while(f!=r)
{
f=(f+1)%SIZE;
printf("%d \n",que[f]);
}
return;
}
//function to search an item
int search(int item)
{
int f=front,r=rear;
while(f!=r)
{
f=(f+1)%SIZE;
if(que[f]==item)
return 1;
}
return 0;
}











