#include <stdio.h>
#include <math.h>

void sieveOfErasthonesis(int *a){
	for(int i=2;i<=sqrt(100000)+1;i++){
		if(a[i]){
			for(int j=2*i;j<100000;j+=i)
				a[j]=0;
		}
	}
}

int main(){
	int num;
	scanf("%d",&num);
	int prime[100000];
	for(int i=0;i<100000;i++) 
		prime[i]=1;
	prime[0]=prime[1]=0;
	sieveOfErasthonesis(prime);
	if(prime[num])
		printf("prime number\n");
	else 
		printf("not prime\n");
	return 0;
}