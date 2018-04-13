#include <stdio.h>

int main(){
	int n,temp,sum=0;
	scanf("%d",&n);
	temp=n;
	while(temp){
		sum+=(temp%10)*(temp%10)*(temp%10);
		temp/=10;
	}
	if(n==sum)
		printf("ARMSTRONG NUMBER\n");
	else
		printf("NOT A ARMSTRONG NUMBER\n");
	return 0;
}