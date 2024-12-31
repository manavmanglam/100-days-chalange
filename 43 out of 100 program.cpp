#include<stdio.h>
int main(){
	int n;
	printf("enter n : ");
	scanf("%d",&n);
	int coef;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			printf(" ");
		}
		for(int j=0;j<=i;j++){
			if(i==0||j==0){
				coef=1;
			}
			else{
				coef= coef*(i-j+1)/j;
			}
			printf("%d" ,coef);
		}
		printf("\n");
	}
	return 0;
}
