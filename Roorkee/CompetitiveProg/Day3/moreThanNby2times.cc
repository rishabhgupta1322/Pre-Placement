#include <bits/stdc++.h>
using namespace std;

int checkMaxOccuring(vector<int> a){
    return a[a.size()/2];
}

int main(){
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int i=0;i<size;i++)
        cin >> arr[i];
    cout << checkMaxOccuring(arr) << endl;
    return 0;
}
