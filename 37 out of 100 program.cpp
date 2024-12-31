//program to make a copy of a text file
#include<stdio.h>
#include<string.h>
int main(){
	FILE *ptr=fopen("fcy.txt","r");
	FILE *newcpy=fopen("newcpy.txt","w");
	char it[100];
	while(fgets(it,100,ptr)!=NULL){
		fputs(it,newcpy);
	}
	fclose(ptr);
	fclose(newcpy);
	return 0;
}
