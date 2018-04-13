#include <stdio.h>

int main(){
	int a[10]={0};
	int num;
	scanf("%d",&num);
	while(num){
		a[num%10]++;
		num/=10;
	}
	for(int i=0;i<10;i++)
		if(a[i])
			printf("Frequency of %d is : %d\n",i,a[i]);
	return 0;
}