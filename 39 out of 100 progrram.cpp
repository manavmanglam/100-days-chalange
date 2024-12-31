//program to print pyramid pattern with integral symetry
#include<stdio.h>
int main(){
	int n;
	printf("enter n : ");
	scanf("%d",&n);
	int s=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<(4*n-s);j++){
			printf(" ");
		}
		if(i<10)printf(" ");
		for(int j=(-i);j<=i;j++){
			printf("%d",j);
		}
		if(i>9){
			s+=4;
		}
		else{
			s+=3;
		}
		printf("\n");
	}
	return 0;	
}

