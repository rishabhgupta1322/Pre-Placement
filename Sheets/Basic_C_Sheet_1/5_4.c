#include <stdio.h>

int main(){
	int n,c=1;
	printf("Enter number of times you want to print pattern: \n");
	//scanf("%d",&n);
	for(int i=1;i<=4;i++){
	        for(int j=1;j<=2*i-1;j++){
	                printf("%d ",j);
	        }
	        printf("\n");
	}
	for(int i=3;i>=0;i--){
	        for(int j=1;j<=2*i-1;j++){
	                printf("%d ",j);
	        }
	        printf("\n");
	}
	return 0;
}
