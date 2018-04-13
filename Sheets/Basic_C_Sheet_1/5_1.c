#include <stdio.h>

int main(){
	int n,c=1;
	printf("Enter number of times you want to print pattern: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
