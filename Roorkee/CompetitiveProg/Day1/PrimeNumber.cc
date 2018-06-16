#include <bits/stdc++.h>
using namespace std;

bool prime(int num){
    if(num<2) return false;
    int l=sqrt(num);
    for(int i=2;i<=l;i++)
        if(num%i==0)
            return false;
    return true;
}

int main(){
    int num;
    cin >> num;
    if(prime(num))
        printf("Prime Number\n");
    else
        printf("Not a Prime Number\n");
    return 0;
}
