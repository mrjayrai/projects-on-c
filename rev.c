#include<stdio.h>
int main()
{
	long int a,c,e,g,h,num,rev;
	// clrscr();
	printf("Enter the number to reverse\n");
	scanf("%ld", &num);
	a = (num%10)*10000;
	c = ((num/10)%10)*1000;
	e = (((num/10)/10)%10)*100;
	g = ((((num/10)/10)/10)%10)*10;
	h = (((num/10)/10)/10)/10;
	rev = a+c+e+g+h;
	printf("%ld",rev);
	// getch();
	return 0;
}