#include<stdio.h>
int main(){
	FILE *ptr;
	ptr=fopen("newfile.txt","w");
	while(1){
		char s[500];
		printf("enter a sentence\tto quite enter '/Q'\n");
		gets(s);
		if(s[0]=='/'&&s[1]=='Q')break;
		fputs(s,ptr);
		printf("!done!\n");
	}
	fclose(ptr);
	return 0;
}
