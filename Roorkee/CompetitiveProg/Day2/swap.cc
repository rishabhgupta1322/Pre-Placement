#include <iostream>
using namespace std;

template <class T>
void swap1(T &a,T &b){
    T c = a;
    a = b;
    b = c;
}

int main(){
    int a=10,b=20;
    float c=10.05,d=20.10;
    swap1(a,b);
    swap1(c,d);
    cout << a << " " << b  << endl;
    cout << c << " " << d  << endl;
    return 0;
}
