#include <stdio.h>

void recursiveFibonacci(int l,int first,int second){
	if(l<=0) return;
	printf("%d ",first+second);
	recursiveFibonacci(--l,second,first+second);
}

void iterativeFibonacci(int l){
	int a=0,b=1,c;
	if(l==1)
		printf("0\n");
	else if(l==2)
		printf("0 1\n");
	else{
		printf("0 1 ");
		for(int i=1;i<=l-2;i++){
			c=a+b;
			a=b;
			b=c;
			printf("%d ",c);
		}
	}
}

int main(){
	int length;
	scanf("%d",&length);
	if(length==1)
		printf("0\n");
	else if(length==2)
		printf("0 1\n");
	else{
		printf("0 1 ");
		recursiveFibonacci(length-2,0,1);
	}
	printf("\n");
	iterativeFibonacci(length);
	printf("\n");
	return 0;
}
