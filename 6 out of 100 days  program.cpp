//program to swap the value of two variable with a 3rd variable.
#include<stdio.h>
int main(){
	int a,b;
	printf("enetr a = ");
	scanf("%d",&a);
	printf("enetr b = ");
	scanf("%d",&b);
	int c;
	c=a;
	a=b;
	b=c;
	printf("a = %d  b = %d\n",a,b);
	return 0;
}
