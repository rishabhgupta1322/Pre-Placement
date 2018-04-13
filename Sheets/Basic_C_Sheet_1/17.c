#include <stdio.h>

void swap(int *a,int *b){
	*a=*a + (*b);
	*=*ba - (*b);
	*a=*a - (*b);
}

int main(){
	int a[3];
	scanf("%d%d%d",&a[0],&a[1],&a[2]);
	if(a[1]>a[2])
		swap(&a[1],&a[2]);
	if(a[0]>a[1])
		swap(&a[1],&a[0]);
	printf("%d",a[0]);
	return 0;
}