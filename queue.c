#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
void enqueue();
void dequeue();
void display();
struct node
{
int data;
struct node *next;
};
struct node *head=NULL;
void enqueue()
{
struct node *temp,*newnode;
newnode=(struct node*)malloc(sizeof(struct node *));
if(newnode==NULL)
printf("no space available");
else
{
printf("enter the data in the newnode\n");
scanf("%d",&newnode->data);
if(head==NULL)
{
head=newnode;
}
else
{
temp=head;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=newnode;
printf("inserted successfully\n");
}
}
}
void dequeue()
{
struct node *temp;
if(head==NULL)
printf("no space available");
else
{
temp=head;
head=temp->next;
free(temp);
}
printf("deleted successfully \n");
}
void display()
{
struct node *temp;
if(head==NULL)
printf("the list is empty nothing to display\n");
else
{
temp=head;
printf("the elements are \n");
printf("%d\n",temp->data);
while(temp->next!=NULL)
{
temp=temp->next;
printf("%d\n",temp->data);
}
}
}
void  main()
{
int choice;
printf("\n \tqueue operations using linked list");
printf("\n \t 1.enqueue\n \t 2.dequeue \n \t 3.display \n \t 4.EXIT\n\t");
do
{
printf("enter the choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
enqueue();
break;
case 2:
dequeue();
break;
case 3:
display();
break;
case 4:
printf("exit\n");
break;
default:
printf("invalid choice");
}
}
while(choice!=4);
}


