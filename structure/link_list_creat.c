#include"struct.h"
NODE *link_list_creat()
{
	NODE *head,*new,*tail;
	extern int count;	

	head=tail=(NODE *)malloc(sizeof(NODE));
	puts("请输入学生姓名");
	scanf("%s",head->student.name);
	puts("请输入学生学号");
	scanf("%d",&head->student.num);
	for(int i=1;i<count;i++)
	{
		new=(NODE *)malloc(sizeof(NODE));

		if(new==NULL)
		{	
			puts("分配错误");
			exit(-1);
		}

		tail->next=new;
		puts("请输入学生姓名");
		scanf("%s",new->student.name);
		puts("请输入学生学号");
		scanf("%d",&new->student.num);
		
		tail=new;
	}
	tail->next=NULL;
	return head;
}	

