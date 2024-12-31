//find leap yera
#include<stdio.h>
int main(){
	int y;
	printf("enter year : ");
	scanf("%d", &y);
	if((y%4==0 && y%100!=0)||(y%400==0)){
		printf("leap year");
	}
	else{
		printf("Not a leap year");
	}
	return 0;
}
