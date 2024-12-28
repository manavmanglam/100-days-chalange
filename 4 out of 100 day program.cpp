//for assingement operator
#include<stdio.h>
int main(){
	int a,b;
	printf("enetr a = ");
	scanf("%d",&a);
	b=a;
	printf("b=a : %d\n",b);
	b+=a;
	printf("b+=a : %d\n",b);
	b*=a;
	printf("b*=a : %d\n",b);
	b/=a;
	printf("b/=a : %d\n",b);
	b-=a;
	printf("b-=a : %d\n",b);
	b%=a;
	printf("b%%=a : %d\n",b);
	return 0;
}
