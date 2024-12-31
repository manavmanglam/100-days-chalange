//program to calculate real root of quadratic equation.
#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,D,r1,r2;
	printf("Enter value of a, b and c\n");
	scanf("%f %f %f" ,&a,&b,&c);
	D=b*b-4*a*c;
	if(D<0){
		printf("roots are imaginary");
	}
	else{ 
	r1=(-b+sqrt(D))/(2*a);
	r2=(-b-sqrt(D))/(2*a);
	printf("roots are %f %f",r1,r2);
	}
	return 0;
}
