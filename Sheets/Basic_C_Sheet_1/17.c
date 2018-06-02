#include <stdio.h>

int gcdRecursive(int a,int b){
	if(b==0)
		return a;
	return gcdRecursive(b,a%b);
}

int gcdIterative(int a,int b){
	int divd=a,divsr=b,rem=a%b;
	while(rem){
		divd=divsr;
		divsr=rem;
		rem=divd%divsr;
	}
	return divsr;
}

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("Iterative GCD is %d\n",gcdIterative(a,b));
	printf("Recursive GCD is %d\n",gcdRecursive(a,b));
	return 0;
}