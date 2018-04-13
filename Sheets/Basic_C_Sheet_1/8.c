#include <stdio.h>

int reverse(int num){
	int res=0;
	while(num){
		res=res*10+num%10;
		num/=10;
	}
	return res;
}

void checkPallindrome(int num){
	if(num==reverse(num)){
		printf("Pallindrome\n");
	}else{
		printf("Not Pallindrome\n");
	}
}

int main(){
	int num;
	scanf("%d",&num);
	printf("Reverse of %d is : %d\n",num,reverse(num));
	checkPallindrome(num);
	return 0;
}