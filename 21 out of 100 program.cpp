//to get prime factor of a number
#include<stdio.h>
int main(){
	int n;
	printf("enetr n : ");
	scanf("%d" ,&n);
	while(n!=1){
		for(int i=2;i<=n;i++){
			if(n%i==0){
				printf("%d",i);
				n/=i;
				break;
			}
		}
		return 0;
	}
}

