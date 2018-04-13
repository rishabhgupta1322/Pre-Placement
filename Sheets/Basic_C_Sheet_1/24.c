#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

int partition(int arr[],int beg,int end){
	int j=beg-1;
	for(int i=beg;i<end;i++)
		if(arr[i] <= arr[end])
			swap(&arr[i],&arr[++j]);
	swap(&arr[j+1],&arr[end]);
	return j+1;
}

void qSort(int arr[],int beg,int end){
	int pivot;
	if(beg<end){
		pivot=partition(arr,beg,end);
		qSort(arr,beg,pivot-1);
		qSort(arr,pivot+1,end);
	}
}

int main(){
	int n,*arr;
	scanf("%d",&n);
	arr=(int*)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	qSort(arr,0,n-1);
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
	return 0;
}