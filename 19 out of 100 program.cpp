//optimized method for lcm and hcf
#include<stdio.h>
int main(){
	int a,b,hcf,lcm,prod;
	printf("enter two number : ");
	scanf("%d %d" ,&a,&b);
	prod=a*b;
	while(b%a!=0){
		int c=a;
		a=b%a;
		b=c;
	}
	hcf=a;
	lcm=prod/hcf;
	printf("LCM = %d and HCF = %d",lcm,hcf);
	return 0;
}
