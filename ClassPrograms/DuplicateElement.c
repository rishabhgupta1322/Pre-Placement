#include <stdio.h>
#include <stdlib.h>
#define F(i,a,b) for(int i=(int)(a);i<(int)(b);i++)

int main(){
        int t,m,n,*a,flag=0,count=0;
        scanf("%d",&n);
        a=(int*)malloc(sizeof(int)*n);
        F(i,0,n)
                scanf("%d",&a[i]);
        F(i,0,n){
                if(a[i]==0) count++;
        }
        if(count>1)
                flag=1;
        F(i,0,n){
                if(a[abs(a[i])]>=1){
                        a[abs(a[i])]*=(-1);
                }
                else{
                        flag=1;
                        break;
                }
        }
        if(!flag)
                printf("No Duplicate Found\n");
        else
                printf("Duplicate Found\n");
        return 0;
}
