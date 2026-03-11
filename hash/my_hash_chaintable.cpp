#include<stdio.h>
#include<stdlib.h>

struct node
{
	int n;
	node* next;
};

node** create_hash(int max_len)
{
	node** temp=(node**)calloc(max_len,sizeof(node*));
	for(int i=0;i<max_len;i++)
	{
		temp[i]=NULL;
	}
	if(temp==NULL)
	{
		printf("no memory!!!");
		exit(0);
	}
	return temp;
}

void add_to_hash(int num,int max_len,node** hash)
{
	int idx=num%max_len;
	node* temp=(node*)calloc(1,sizeof(node));
	temp->n=num;
	temp->next=hash[idx];
	hash[idx]=temp;
	return;
}

void inquiry(int num,int max_len,node** hash)
{
	int idx=num%max_len;
	node* p=hash[idx];
	while(p!=NULL && p->n!=num)
	{
		p=p->next;
	}
	if(p==NULL)
	{
		printf("inquiry failed:%d is not in hash\n",num);
	}
	else
	{
		printf("inquiry successed:%d is in hash\n",num);
	}
	return;
}

void show_hash(int max_len,node** hash)
{
	
	for(int i=0;i<max_len;i++)
	{
		node* p=hash[i];
		while(p!=NULL)
		{
			printf("%d->",p->n);
			p=p->next;
		}
		printf("NULL");
		if(i!=max_len-1)
		{
			printf("\n");
		 } 
	}
}
 
int main()
{
	int max_len=0;
	node** hash=NULL;
	printf("please enter the hashtable's len:\n");
	scanf("%d",&max_len);
	hash=create_hash(max_len);
	
	while(1)
	{
		int num=0;
		printf("please enter the num(enter -1 to end)\n");
		scanf("%d",&num);
		if(num==-1)
		{
			break;
		}
		add_to_hash(num,max_len,hash);
	}
	
	while(1)
	{
		int num=0;
		printf("please enter the wanted num(enter -1 to end)\n");
		scanf("%d",&num);
		if(num==-1)
		{
			break;
		}
		inquiry(num,max_len,hash);
	}
	
	show_hash(max_len,hash);
	return 0;
}
