#include<stdio.h>
int main()
{
	int i,j,dzm,xzm,sz,kg,qt;
	char a[3][8];
	dzm=xzm=sz=kg=qt=0;
	

	for(i=0;i<3;i++)
	{
		gets(a[i]);
		for(j=0;j<8&&a[i][j]!='/0';j++)
		{
		if(a[i][j]>='A'&&a[i][j]<='Z')
		dzm++;
		else if(a[i][j]>='a'&&a[i][j]<='z')
		xzm++;
		else if(a[i][j]>='0'&&a[i][j]<='9')
		sz++;
		else if(a[i][j]==' ')
		kg++;	
		else
		qt++;
		}
		printf("dzm:%d\n",dzm);
		printf("xdm:%d\n",xzm);
		printf("sz:%d\n",sz);
		printf("kg:%d\n",kg);
		printf("qt:%d\n",qt);
	}
	return 0;
	
} 
