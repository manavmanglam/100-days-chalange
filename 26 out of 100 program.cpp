//program to check if a number is armstrong.
#include<stdio.h>
#include<math.h>
int main(){
	int n,digits=0,og,res;
	printf("enetr n : ");
	scanf("%d",&n);
	og=n;
	while(og>0){
		digits++;
		og/=10;
	}
	og=n;
	while(og>0){
		res+=pow(og%10,digits);
		og/=10;
	}
	(res==n)?printf("it is an armsstrong number"):printf("it is not an armstrong number");
	return 0;
}
