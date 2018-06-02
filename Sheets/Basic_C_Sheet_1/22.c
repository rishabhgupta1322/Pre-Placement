#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,*a,sum=0;
	scanf("%d",&n);
	a=(int *)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	printf("Sum of elements is %d\n",sum);
	return 0;
}