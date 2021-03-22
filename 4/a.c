#include<stdio.h>
#include<stdlib.h>
void create(int);
void insertAtAnypos();
void display();
void deleteAtAnypos();

struct node{
int val;
struct node *next;
}*start=NULL,*temp,*ptr;

int main()
{
int ch,n,i,m;
printf("\tsingly linked list \t \n");
while(1)
{
printf("\n\t.1-create \n\t.2-insert \n\t.3-delete \n\t.4-display \n\t.5-exit \n\t enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("\n how many nodes u want to create:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n enter the data:");
scanf("%d",&m);
create(m);
}
break;
case 2: insertAtAnypos();
break;
case 3: deleteAtAnypos();
break;
case 4: display();
break;
case 5: exit(0);
break;
default: printf("invalid choice\n");

}
}
}
void create(int data)
{
temp=(struct node *)malloc(sizeof(struct node));
temp->val=data;
temp->next=NULL;
if(start==NULL)
{
start=temp;
}
else
{
ptr=start;
while(ptr->next!=NULL)
ptr=ptr->next;
ptr->next=temp;
}
}
void insertAtAnypos()
{
int num,pos,i;
ptr=(struct node*)malloc(sizeof(struct node));
printf("enter data:");
scanf("%d",&num);
printf("\nenter the position to insert:");
scanf("%d",&pos);
ptr->val=num;
    temp=start;
    if(pos==1)
    {
if(start==NULL)
{
ptr->next=NULL;
start=ptr;
}
else
{
ptr->next=start;
start=ptr;
}
printf("\n%d has been inserted",ptr->val);
}
else
{
for(i=1;i<pos-1;i++)
{
if(temp->next==NULL)
{
printf("there are less elements!");
return;
}
else
temp=temp->next;
}
ptr->next=temp->next;
temp->next=ptr;
printf("\n%d has been inserted",ptr->val);
}
}
void display()
{
if(start==NULL)
printf("list is empty");
else
{
temp=start;
printf("the linked list is:\n");
while(temp!=NULL)
{
if(temp==start)
{
if(temp->next==NULL)
{
printf("start->%d->NULL",temp->val);
temp=temp->next;
}
else
{
printf("start->%d->",temp->val);
temp=temp->next;
}
}
else if(temp->next==NULL)
{
printf("%d->NULL",temp->val);
temp=temp->next;
}
else
{
printf("%d->",temp->val);
temp=temp->next;
}
}
}
}
void deleteAtAnypos()
{
int pos,i;
if(start==NULL)
printf("list is empty");
else
{
printf("enter position to delete:");
scanf("%d",&pos);
temp=start;
if(pos==1)
{
start=start->next;
printf("deleted element is %d",temp->val);
free(temp);
}
else
{
for(i=1;i<pos-1;i++)
{
if(temp->next==NULL)
{
printf("there are less elements!");
return;
}
else
temp=temp->next;
}
ptr=temp->next;
if(ptr->next==NULL)
temp->next=NULL;
else
temp->next=ptr->next;
printf("deleted element is %d",ptr->val);
free(ptr);
}
}
}