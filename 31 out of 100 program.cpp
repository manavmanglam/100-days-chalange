//program to check if a nukber is perfect square
#include<stdio.h>
#include<math.h>
int main(){
	int n,r;
	printf("enter n : ");
	scanf("%d" ,&n);
	r=sqrt(n);
	r*r==n?printf("perfect square"):printf("not a perfect square");	
}
