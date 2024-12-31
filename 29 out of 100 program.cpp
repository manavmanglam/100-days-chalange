//pyramid pattern
#include<stdio.h>
int main(){
	int n;
	printf("enter height : ");
	scanf("%d",&n);
	int s=1;
	for(int i=0;i<n;i++){
		for(int j=1;j<n-i;j++){
			printf(" ");
		}
		for(int j=0;j<s;j++){
			printf("*");
		}
		s+=2;
		printf("\n");
	}
	return 0;
}
