//program to print hollow pyramid with '*'
#include<stdio.h>
int main(){
	int n;
	printf("enter n : ");
	scanf("%d",&n);
	int s=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			printf(" ");
		}
		for(int j=0;j<s;j++){
			if(i==0||i==n-1||j==0||j==s-1){
				printf("*");
			}
			else printf(" ");
		}
		s+=2;
		printf("\n");
	}
	return 0;
}
