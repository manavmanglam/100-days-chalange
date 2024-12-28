//program to swap the value of two variable without a 3rd variable
#include<stdio.h>
int main(){
	int a,b;
	printf("enter a = ");
	scanf("%d",&a);
	printf("enter b = ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf(" a = %d  b = %d\n",a,b);
	return 0;
}
