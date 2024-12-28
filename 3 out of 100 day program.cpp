//to use logical operators
#include<stdio.h>
int main(){
	int a,b;
	printf("enter a = ");
	scanf("%d", &a);
	printf("enter b = ");
	scanf("%d", &b);
	printf("\n");
	
	printf("logical expression \t boolean value\n");
	printf("a and b            \t %\n",a&&b);
	printf("not a and b        \t %\n",!a&&b);
	printf("a and not b        \t %\n",a&&!b);
	printf("not a and not b    \t %\n",!a&&!b);
	printf("a or b             \t %d\n",a||b);
	printf("not a or b         \t %d\n",!a||b);
	printf("a or not b         \t %d\n",a||!b);
	printf("not a or not b     \t %d\n",!a||!b);
	return 0;
}
