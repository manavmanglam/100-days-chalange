//program to print floyd's triangle of n heights
#include<stdio.h>
int main(){
	int n;
	printf("enter n : ");
	scanf("%d",&n);
	int s=1,t=1;
	for(int i=0;i<n;i++){
		int j=s;
		while(j){
			printf("%d",t);
			t++;
			j--;
		}
		printf("\n");
		s++;
	}
	return 0;
}
