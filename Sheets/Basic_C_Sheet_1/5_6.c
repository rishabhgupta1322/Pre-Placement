#include <stdio.h>

int main(){
	int n,c=1;
	printf("Enter number of times you want to print pattern: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=n;j>=i;j--){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
