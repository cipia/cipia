#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	x=x/10; 
	printf("x=%d\n",x);

	switch(x)
	{
	case 9:printf("A\n");break;
	case 8:printf("B\n");break;
	case 7:printf("C\n");break;
	case 6:printf("D\n");break;
	case 5:printf("E\n");break;
	default:printf("erro");
	}
	return 0;
 } 
