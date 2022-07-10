#include <stdio.h>
#include <stdlib.h>

struct node
{
  int num;
  struct node *nextptr;
}
 
stnode, *ptr;

int Find(int);
void main()
{
	int n,i,FindElem,FindPlc;
	stnode.nextptr=NULL;
	ptr=&stnode;
    printf(" Input the number of nodes : ");
    scanf("%d", &n);	
	printf("\n");
	for(i=0;i< n;i++)
	{
		ptr->nextptr=(struct node *)malloc(sizeof(struct node));
		printf(" Input data for node %d : ",i+1);
		scanf("%d",&ptr->num);
		ptr=ptr->nextptr;
	}
	ptr->nextptr=NULL;
	printf("\n Data entered in the list are :\n");

    ptr=&stnode;
	while(ptr->nextptr!=NULL)
	{
		printf(" Data = %d\n",ptr->num);
		ptr=ptr->nextptr;
	}

	printf("\n");
	printf(" Input the element to be searched : ");
	scanf("%d",&FindElem);
	FindPlc=Find(FindElem);
	if(FindPlc<=n)
		printf(" Element found at node %d \n\n",FindPlc);
	else
		printf(" This element is not in linked list.\n\n");
}
int Find(int FindElem)
{
	int ctr=1;
	ptr=&stnode;
	while(ptr->nextptr!=NULL)
	{
		if(ptr->num==FindElem)
			break;
		else
			ctr++;
			ptr=ptr->nextptr;
	}
	return ctr;
}