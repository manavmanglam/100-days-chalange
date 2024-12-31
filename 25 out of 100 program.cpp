//program to calculate greatest common denominator of two number using euclid's algorithm
#include<stdio.h>
int main(){
	int a,b;
	printf("enetr two number : ");
	scanf("%d %d",&a,&b);
	while(a!=b){
		if(a>b){
			a-=b;
		}
		else{
			b-=a;
		}
	}
	printf("GCD = %d" ,a);
	return 0;
}
