#include <bits/stdc++.h>
using namespace std;

int squareRoot(int num){
    int low=1,high=num,mid=1;
    unsigned long long sq,sq2;
    while(low<=high){
        mid = low + (high-low)/2;
        sq = mid*mid;
        sq2 = (mid-1)*(mid-1);
        if(sq > num)
            high = mid-1;
        else if(!(sq < num && num<sq2))
            low = mid+1;
    }
    return low-1;
}

int main(){
    int num,i,j,rt,flag=0,lim;
    cin >> num;
    lim = squareRoot(num);
    for(i=1;i<lim && !flag;i++){
        j = num - i*i;
        rt = squareRoot(j);
        if(rt*rt == j) flag = 1;
    }
    --i;
    if(flag){
        cout << "Numbers can be broke down in square pair" << endl;
        cout << "Numbers are " << i*i << " + " << j << " = " << num << endl;
    }else{
        cout << "Numbers can't be broken down" << endl;
    }
    return 0;
}
