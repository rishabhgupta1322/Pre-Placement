#include <stdio.h>

void transpose(int row,int col,int arr[][col],int res[][row]){
	int i,j;
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			res[j][i]=arr[i][j];
}

int main(){
	int row,col,i,j;
	scanf("%d%d",&row,&col);
	int arr[row][col],res[col][row];
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			scanf("%d",&arr[i][j]);
	transpose(row,col,arr,res);
	for(i=0;i<col;i++){
		for(j=0;j<row;j++)
			printf("%d ",res[i][j]);
		printf("\n");
	}
	return 0;
}
