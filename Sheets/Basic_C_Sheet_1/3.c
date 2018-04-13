#include <stdio.h>

void swap(char *a,char *b){
	char temp=*a;
	*a=*b;
	*b=temp;
}

void reverse(char binary[],int size){
	for(int i=0;i<size/2;i++){
		swap(&binary[i],&binary[size-i-1]);
	}
}

int main(){
	int num,n,i=0;
	char binary[100];
	printf("Enter a number: ");
	scanf("%d",&n);
	num=n;
	while(num){
		binary[i++]=(num%2+'0');
		num/=2;
	}
	binary[i]='\0';
	reverse(binary,i);
	printf("Binary of %d is %s\n",n,binary);
	return 0;
}
