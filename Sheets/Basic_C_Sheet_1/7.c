#include <stdio.h>

int main(){
	int count3=0,count5=0;
	for(int i=1;i<=1000;i++){
		if(i%3==0)
			count3++,  printf("%d ",i);
		else if(i%5==0)
			count5++,  printf("%d ",i);
	}
	printf("\nCount of 3 is: %d\n",count3);
	printf("Count of 5 is: %d\n",count5);
	return 0;
}