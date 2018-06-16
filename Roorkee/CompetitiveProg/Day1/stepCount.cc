#include <bits/stdc++.h>
using namespace std;

int stepCount(int num){
    int c=1;
    if(num < 1) return 0;
    while(num!=1){
        if(num%2 == 0)
            num /= 2;
        else
            num = 3*num + 1;
        c++;
    }
    return c;
}

int main(){
    int low,high,num=0,steps=0,temp;
    cin >> low >> high;
    while(low<=high){
        temp = stepCount(low);
        if(steps < temp){
            steps = temp;
            num = low;
        }
        low++;
    }
    cout << num << endl;
    return 0;
}
