#include <stdio.h>

int countDigit(int num){
	int count=0;
	while(num){
		count++;
		num/=10;
	}
	return count;
}

int main(){
	int num;
	scanf("%d",&num);
	printf("Number of digits in %d is : %d\n",num,countDigit(num));
	return 0;
}