//program to read a sentence from a file pdf
#include<stdio.h>
int main(){
	FILE *ptr;
	ptr=fopen("is.txt","r");
	char r;
	while(r!=EOF){
		r=fgetc(ptr);
		printf("%c",r);
	}
	fclose(ptr);
	return 0;
}
