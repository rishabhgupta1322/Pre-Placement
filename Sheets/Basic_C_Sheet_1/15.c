#include <stdio.h>

int factorial(int n){
	if(n<2)
		return 1;
	else
		return n*factorial(n-1);
}

int main(){
	int n;
	scanf("%d",&n);
	printf("Factorial of %d is %d\n",n,factorial(n));
	return 0;
}