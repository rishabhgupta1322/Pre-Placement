#include <stdio.h>

void swap(int *a,int *b){
	*a=*a + (*b);
	*b=*a - (*b);
	*a=*a - (*b);
}

void sort(int *a,int size){
	int i,j;
	for(i=0;i<size-1;i++){
		if(a[i]%2==0)
			for(int j=i+1;j<size;j++){
				if(a[j]%2)
					swap(&a[i],&a[j]);
			}
	}
}

int main(){
	int size,i;
	scanf("%d",&size);
	int arr[size];
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	sort(arr,size);
	for(i=0;i<size;i++)
		printf("%d ",arr[i]);
	return 0;
}
