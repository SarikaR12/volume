#include<stdio.h>

struct distances{
	int inch;
	int feet;
};

void main()
{
	struct distances s;
	int h1,h2,f1,f2;
	printf("Enter First Value: \n");
	
	printf("Enter inch value = ");
	scanf("%d",&h1);
	printf("Enter feet value = ");
	scanf("%d",&f1);
	
	printf("Enter second value: \n");
	
	printf("Enter inch value = ");
	scanf("%d",&h2);
	printf("Enter feet value = ");
	scanf("%d",&f2);
	
	s.inch=h1+h2;
	s.feet=f1+f2;
	
	while(s.inch>=12)
	{
		if(s.inch>12)
		{
			s.inch=s.inch-12;
			s.feet++;
		}
	}
	
	printf("inch = %d\n",s.inch);
	printf("feet = %d\n",s.feet);
	


}