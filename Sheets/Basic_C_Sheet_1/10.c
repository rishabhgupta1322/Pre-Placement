#include <stdio.h>

void swapWithThirdVariable(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void swapWithoutThirdVariable(int *a,int *b){
	*a=*a + (*b);
	*b=*a - (*b);
	*a=*a - (*b);
}

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("Numbers are a = %d and b=%d\n",a,b);
	swapWithThirdVariable(&a,&b);
	printf("Numbers after swap are a = %d and b=%d\n",a,b);
	printf("Numbers are a = %d and b=%d\n",a,b);
	swapWithoutThirdVariable(&a,&b);
	printf("Numbers after swap are a = %d and b=%d\n",a,b);
	return 0;
}
