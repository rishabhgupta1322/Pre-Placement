#include <stdio.h>

int main(){
	int n,a[11]={0},i,sum=0,temp;
	a[0]=a[1]=1;
	for(int i=2;i<=10;i++)
		a[i]=a[i-1]*i;
	scanf("%d",&n);
	temp=n;
	while(temp){
		sum+=a[temp%10];
		temp/=10;
	}
	if(sum==n)
		printf("STRONG NUMBER\n");
	else
		printf("NOT A STRONG NUMBER\n");
	return 0;
}