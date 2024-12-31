//sum of first 10 digit using for loop and while loop
#include<stdio.h>
int main(){
	int sum_f=0,sum_w=0;
	for(int i=0;i<=10;i++){
		sum_f+=i;
	}
	int i=0;
	while(i<=10){
		sum_w+i;
		i++;
	}
	printf("%d %d",sum_f,sum_w);
	return 0;
}
