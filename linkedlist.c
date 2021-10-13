// compiled on vscode
/*Linkedlist.
 Linkedlist can be defined as collection of  nodes that are randomly stored in the memory. A node contains two fields
1)data stored at that particular address and 
2)The pointer which contains the address of the next node in the memory. 
The last node of the list contains pointer to the null.*/
//============================================================================
/*Types of linked list
1)Single linked list (sll)
2)double linked list(dll)
3)circular linked list (cll)
circular is divided into i)singly circular (csll)
                ii)doubly circular linked list    (cdll)      */

/*operations performed on linked list :   1)insert data 
2)search data
3)display
4)delete data based on data and pos(index)   */
//code implentation of sll
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL;
struct Node *temp;
struct Node *temp1;
struct Node *newnode;

void create1();
void del_begin();
void del_last();
void del_specific(int);
void del_at_pos(int);
void display();
int main()
{   create1(10);
    create1(20);
    create1(30);
    create1(40);
    display();
    //del_begin();
    //printf("\n");
    //display();
    //del_last();
    //printf("\n");
    //display();
   // del_at_pos(index);
	//insert_at_pos(index);
    //del_specific(data);
    printf("\n");
    display();
    return 0;
}
void insert_at_pos(int pos)
{
	int i=0;
	struct Node *newnode1;
	newnode1=(struct Node*)malloc(sizeof(struct Node));
	newnode1->data =70;
	temp=head;
	while(i++!=pos)
	{
		temp=temp->next;
	}
	i=0;
	temp1=head;
	while(i++!=pos-1)
	{
		temp1=temp1->next;
	}
	temp1->next=newnode1;
	
	newnode1->next=temp;
}
void del_at_pos(int pos)
{
    int i=0;
    temp=head;
    while(i++!=pos)
    {
        temp=temp->next;
    }
    i=0;
    temp1=head;
    while(i++!= pos-1)
    {
        temp1=temp1->next;
    }
    i=0;
    
    temp1->next = temp->next;
    free(temp);
	temp=NULL;
}
void del_begin()
{
	temp=head;
	temp=temp->next;
	free(head);
	head = NULL;
	head=temp;
}
void del_last()
{
	temp=head;
	while(temp->next!=newnode)
	{
		temp=temp->next;
	}
	free(newnode);
	newnode=NULL;
	temp->next=NULL;
	newnode=temp;
}
void create1(int num)
{
    if(head==NULL)
    {
    head = (struct Node *)malloc(sizeof(struct Node));
    head->data = num;
    temp=head;
    }
    else
    {
     newnode  = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = num;
    temp->next = newnode;
    newnode->next = NULL;
    temp=newnode;
    }
}    
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}