#include <bits/stdc++.h>
using namespace std;

int cubeRoot(int num){
    unsigned long long cube,c2;
    int low=1,high=num,mid=1;
    while(low<=high){
        mid = low + (high-low)/2;
        cube = mid*mid*mid;
        c2 = (mid-1)*(mid-1)*(mid-1);
        if(cube > num)
            high = mid-1;
        else if(!(cube < num && num<c2))
            low = mid+1;
    }
    return low-1;
}

int main(){
    int  num;
    cin >> num;
    cout << cubeRoot(num) << endl;
    return 0;
}
