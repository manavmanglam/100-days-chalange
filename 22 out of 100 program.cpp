//program to know nth fibonacci number
#include<stdio.h>
int main(){
	int n,a=0,b=1;
	printf("enetr a number : ");
	scanf("%d",&n);
	if(n==1){
		printf("%d",a);
		return 0;
	}
	printf("%d %d ",a,b);
	for(int i=3;i<=n;i++){
		int c=b;
		b=a+b;
		a=c;
		printf("%d ",b);
	}
	return 0;
}
