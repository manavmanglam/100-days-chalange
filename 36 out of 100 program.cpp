//program to make a table of data given by the user
#include<stdio.h>
int main(){
	int roll,score,n;
	char name[100];
	FILE *ptr;
	ptr=fopen("stuData.txt","a");
	printf("number of data you want to enter : ");
	scanf("%d",&n);
	while(n){
		printf("enter : name rollNumber score.\n");
		scanf("%s %d %d",name,&roll,&score);
		fputs(name,ptr);
		fprintf(ptr,"\t%d\t%d\n",roll,score);
		n--;
	}
	fclose(ptr);
	return 0;
}
