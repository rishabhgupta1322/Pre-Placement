#include <bits/stdc++.h>
using namespace std;

void factors(int num){
    int l=sqrt(num);
    for(int i=1;i<=l;i++){
        if(num%i==0)
            cout << i << " " << num/i << endl;
    }
}

int main(){
    int num;
    cin >> num;
    factors(num);
    return 0;
}
