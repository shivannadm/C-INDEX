//header linked list 
#include<stdio.h>
#include<stdlib.h>

struct node 
{
  int info;
  struct node *next;
};

struct headernode {
int count;
struct node *next;
};

typedef struct headernode HNODE;
typedef struct node DNODE;
HNODE *head=NULL;
void insert_end();
void display();
DNODE* getnode();

main()
{
  int choice;
  while(1)
  {
   printf("\n1.Insert\n");
   printf("2.Display\n");
   printf("3.Exit\n");
   printf("Enter your choice: ");
   scanf("%d",&choice);
   switch(choice)
   {
   case 1:insert_end(); /* insert at the end*/
	      break;

   case 2:display();
	  break;
   case 3:exit(0);
   }
  }
 }

DNODE* getnode()
{
 DNODE  *nd;
 nd=(DNODE *)malloc(sizeof(DNODE));
 printf("Enter the info: \n");
 scanf("%d",&nd->info);
 nd->next=NULL;
 return(nd);
}

void insert_end()
  {
   DNODE *newnode;
   HNODE *hd,*curptr;
    if(head==NULL)
   {
    hd = (HNODE *)malloc(sizeof(HNODE));
    head=hd;
    hd->count=0;
    hd->next=NULL;
    printf("Header node successfully created\n");
   }
     else
    {
      newnode=getnode();
      head->count++;
      printf("Head is incremented %d\n",head->count);
      curptr=head;
      while(curptr->next!=NULL)
	    curptr=curptr->next;
	  curptr->next=newnode;
	  printf("Inserted is successfull\n");

    }
  }

void display()
  {
   DNODE *curptr=head->next;
   HNODE *hd=head;
   printf("%d-> ",hd->count);
   curptr=hd->next;

   while(curptr!=NULL)
  {
   printf("%d-> ",curptr->info);
   curptr=curptr->next;
  }
    printf("\n");
  }
