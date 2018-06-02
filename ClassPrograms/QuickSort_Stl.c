#include <stdio.h>
#include <stdlib.h>

int compare(const void *a,const void *b){
	int l = *(const int *)a;
	int r = *(const int *)b;
	return (l-r);
}

int appear(int *a,int size){
	int num=a[0],c=1,max_c=1,occur=a[0];
	for(int i=1;i<size;i++){
		if(num==a[i]){
			c++;
			if(c>max_c)
				max_c=c , occur=a[i];
		}else{
			c=1, num=a[i];
		}
	}
	return occur;
}

int  main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	qsort(a,n,sizeof(a[0]),compare);
	printf("%d",appear(a,n));
	return 0;
}