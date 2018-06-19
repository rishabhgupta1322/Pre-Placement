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
    int num,res;
    cin >> num;
    res=squareRoot(num);
    cout << res << endl;
    if(res*res == num)
        cout << "Perfect Square" << endl;
    else
        cout << "Not a perfect square" << endl;
    return 0;
}
