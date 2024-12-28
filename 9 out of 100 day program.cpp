//program to calculate amount after adding simple interest to principle amount.
#include<stdio.h>
int main(){
	float p,r,t,A;
	printf("Enter principle amount,ROI per anum and time period(in yrs)\n");
	scanf("%f %f %f",&p,&r,&t);
	A=p+(p*r*t)/100;
	printf("total amount = %f",A);
	return 0;
}
