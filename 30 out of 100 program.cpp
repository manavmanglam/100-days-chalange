//program to check if a number is perfect square by using ceil and floor
#include<stdio.h>
#include<math.h>
int main(){
	int n,c,f;
	printf("enter n : ");
	scanf("%d",&n);
	c=ceil(sqrt(n));
	f=floor(sqrt(n));
	c==f?printf("perfect square"):printf("not a perfevt square");
	
}
