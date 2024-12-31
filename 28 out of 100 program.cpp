//half pyramid
#include<stdio.h>
int main(){
	int n;
	printf("enter height : ");
	scanf("%d" ,&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
