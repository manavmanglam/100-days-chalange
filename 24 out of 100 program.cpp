//to check the number is pelindrome
#include<stdio.h>
int main(){
	int n,r=0,og;
	printf("enetr n : ");
	scanf("%d",&n);
	og=n;
	while(n>0){
		r=(r*10)+(n%10);
		n/=10;
	}
	(r==og)?printf("number is a palindrome"):printf("number is not a palindrome");
	return 0;
}
