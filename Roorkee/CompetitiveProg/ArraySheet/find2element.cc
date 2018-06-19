#include <bits/stdc++.h>
using namespace std;

void findElement(vector<int> arr){
    vector<int> res(n,0);
    for(int i=0;i<n;i++)
        res[arr[i]-1]++;
    for(int i=0;i<n;i++)
        if(res[i]!=1)
            cout << i+1 << " ";
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin >> arr[i];
    findElement(arr);
    return 0;
}
