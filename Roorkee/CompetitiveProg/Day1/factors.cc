#include <bits/stdc++.h>
using namespace std;

void factors(int num){
    int l=sqrt(num);
    for(int i=1;i<=l;i++)
        if(num%i == 0)
            cout << i << " ";
    if(num == l*l) l--;
    for(int i=l;i>=1;i--)
        if(num%i==0 && num%(num/i)==0)
            cout << num/i << " ";
    cout << endl;
}

int main(){
    int num;
    cin >> num;
    factors(num);
    return 0;
}
