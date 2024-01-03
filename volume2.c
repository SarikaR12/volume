#include<stdio.h>
struct student{
	int roll_no;
	char name[100];
	int chem_marks;
	int maths_marks;
	int phy_marks;
	int pers;
};

void main()
{
	int i,n;
	struct student s[5];
	int per,pers;
	printf("-------------Enter Student Details----------------");
	for(i=0;i<5;i++)
	{
		printf("\nEnter Student Roll No:");
		scanf("%d",&s[i].roll_no);
		printf("\nEnter Student Name:");
		scanf("%s",&s[i].name);
		printf("\nEnter Student Chemistry Marks:");
		scanf("%d",&s[i].chem_marks);
		printf("\nEnter Student Mathematics marks:");
		scanf("%d",&s[i].maths_marks);
		printf("\nEnter Student physics mark:");
		scanf("%d",&s[i].phy_marks);
	}
	printf("\n------------student Details --------------\n");
	for(i=0;i<5;i++)
	{
		per= s[i].chem_marks+s[i].maths_marks+s[i].phy_marks;
		pers=per/3;
		printf("student Roll no = %d\n",s[i].roll_no);
		printf("student Name = %s\n",s[i].name);
		printf("student Chemistry marks = %d\n",s[i].chem_marks);
		printf("student Mathematics marks = %d\n",s[i].maths_marks);
		printf("student physics mark = %d\n",s[i].phy_marks);
		printf("student percentage = %d%\n\n",pers);
	}
}