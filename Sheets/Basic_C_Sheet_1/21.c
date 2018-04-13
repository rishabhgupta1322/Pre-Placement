#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b){
	*a=*a + (*b);
	*b=*a - (*b);
	*a=*a - (*b);
}

int main(){
	int n,*a,secondMax=-1,secondMin=-1,max,min;
	scanf("%d",&n);
	a=(int *)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	max=min=a[0];
	secondMax=secondMin=a[1];
	if(secondMax>max)
		swap(&secondMax,&max);
	if(secondMin<min)
		swap(&min,&secondMin);
	for(int i=2;i<n;i++){
		if(a[i]>max){
			secondMax=max;
			max=a[i];
		}else if(a[i]>secondMax)
			secondMax=a[i];
		if(a[i]<min){
			secondMin=min;
			min=a[i];
		}else if(secondMin>a[i])
			secondMin=a[i];
	}
	printf("Second largest : %d\n",secondMax);
	printf("Second smallest : %d\n",secondMin);
	return 0;
}