#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> a,int &low,int &high,int key){
    while(low<high){
        if(a[low] + a[high] == key) return true;
        else if(a[low] + a[high] > key) high--;
        else low++;
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin >> a[i];
    int key,low=0,high=n-1;
    cin >> key;
    if(check(a,low,high,key)){
        cout << a[low] << " + " << a[high] << " = " << key << endl;
    }else{
        cout << "No such Element exsist" << endl;
    }
    return 0;
}
