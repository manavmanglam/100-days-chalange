//program for find factorial of a number.
#include<stdio.h>
int main(){
	int n,fac=1;
	printf("Enter a positive integer : ");
	scanf("%d",&n);
	for(int i=n;i>=1;i--){
		fac*=i;
	}
	printf("%d! = %d",n,fac);
	return 0;
}
