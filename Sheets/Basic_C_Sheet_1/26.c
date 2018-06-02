#include <stdio.h>

void spiral(int r,int c,int a[][]){
	int i,j;
	
}

int main(){
	int row,col;
	scanf("%d%d",&row,&col);
	int a[row][col];
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
			scanf("%d",&a[i][j]);
	spiral(row,col,a);
	return 0;
}