//calculate bmi of the person
#include<stdio.h>
int main(){
	float h,w,bmi;
	printf("enter hieght(m) and weight(kg)\n");
	scanf("%f %f" ,&h,&w);
	bmi=w/(h*h);
	printf("BMI = %f\n ,bmi");
	if(bmi<18.5){
		printf("underweight");
	}
	else if(bmi>=18.5 && bmi<24.9){
		printf("Normal weight");
	}
	else if(bmi>=24.9 && bmi<29.9){
		printf("Overweight");
	}
	else{
		printf("Obese");
	}
	return 0;
}

