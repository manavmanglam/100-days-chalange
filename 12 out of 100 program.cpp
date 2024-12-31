//find vovel or not
#include<stdio.h>
int main(){
	char c;
	printf("enter a character : ");
	scanf("%c",&c);
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
		printf("vovel");
	}
	else{
		printf("Not a vovel");
	}
	return 0;
}
