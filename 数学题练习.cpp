#include<stdio.h>
int main()
{
	float A,B,C,D,E,x;
	scanf("%f",&x);
	if(x>=90)
	printf("A");
	else if(x>=80&&x<=89)
	printf("B");
	else if(x>=70&&x<=79)
	printf("C");
	else if(x>=60&&x<=69)
	printf("D");
	else
	printf("E");
	return 0;
}
 
