#include <bits/stdc++.h>
using namespace std;

void primeFactors(int num){
    if(num<2)
        return;
    if(num%2 ==0){
        while(num%2==0){
            cout << 2 << " ";
            num /= 2;
        }
    }
    for(int i=3;num!=1;i+=2){
        while(num%i==0){
            cout << i << " ";
            num /= i;
        }
    }
    cout << endl;
}

int main(){
    int num;
    cin >> num;
    primeFactors(num);
    return 0;
}
