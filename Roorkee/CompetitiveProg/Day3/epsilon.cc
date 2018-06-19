#include <bits/stdc++.h>
using namespace std;

int main(){
    float pesp,esp = 0.5;
    while(1+esp != 1){
        pesp = esp;
        esp /= 2;
    }
    cout << pesp << endl;
    return 0;
}
