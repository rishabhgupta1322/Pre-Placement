#include <iostream>
using namespace std;

template <class T>
T square(T a){
    return a*a;
}

int main(){
    int a=10;
    float b=.5;
    cout << square(a) << " " << square(b) << endl;
    return 0;
}
