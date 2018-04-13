#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b){
	*a=*a + (*b);
	*b=*a - (*b);
	*a=*a - (*b);
}

int main(){
	int n,*a;
	scanf("%d",&n);
	a=(int*)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n/2;i++)
		swap(&a[i],&a[n-i-1]);
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}