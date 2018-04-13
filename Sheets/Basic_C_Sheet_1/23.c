#include <stdio.h>
#include <stdlib.h>

int linearSearch(int a[],int size,int element){
	for(int i=0;i<size;i++)
		if(a[i]==element)
			return 1;
	return 0;
}

int binarySearch(int a[],int size,int element){
	int beg=0,end=size-1,mid;
	while(beg<=end){
		mid=beg+(end-beg)/2;
		if(a[mid]==element)
			return 1;
		else if(a[mid]>element)
			end=mid-1;
		else
			beg=mid+1;
	}
	return 0;
}

int main(){
	int n,*a,element;
	scanf("%d",&n);
	a=(int *)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the element to be searched");
	scanf("%d",&element);
	if(linearSearch(a,n,element))
		printf("Element Found\n");
	else
		printf("Element not found\n");
	if(binarySearch(a,n,element))
		printf("Element Found\n");
	else
		printf("Element not found\n");
	return 0;
}