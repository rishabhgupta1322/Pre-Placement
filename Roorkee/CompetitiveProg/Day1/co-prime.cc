#include <bits/stdc++.h>
using namespace std;

int gcd(int num1,int num2){
    if(!num2) return num1;
    return gcd(num2,num1%num2);
}

int main(){
    int num1,num2;
    cin >> num1 >> num2;
    if(gcd(num1,num2) == 1)
        cout << "Co-Prime numbers" << endl;
    else
        cout << "Not a Co-Prime numbers" << endl;
    return 0;
}
