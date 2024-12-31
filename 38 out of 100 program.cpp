//program to delete nth line from a file
#include<stdio.h>
#include<string.h>
int main(){
	FILE *ptr=fopen("delline.txt","r");
	FILE *temp=fopen("temp.tem","w");
	int del;
	printf("delete line number : ");
	scanf("%d",&del);
	char it[100];
	int i=1;
	while(fgets(it,100,ptr)!=NULL){
		if(i==3)goto inc;
		fputs(it,temp);
		inc:
		i++;
	}
	fclose(ptr);
	fclose(temp);
	remove("de1line.txt");
	rename("temp.tmp","newline.txt");
	return 0;
} 
