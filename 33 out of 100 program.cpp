//take and print a series of number untill 0 is eneterd
#include<stdio.h>
int main(){
	int n;
	printf("enter a series of numbers");
	start: 
	scanf("%d",&n);
	if(n==0)  goto end;
	printf("%d",n);
	goto start;
	end:
	return 0;
}
