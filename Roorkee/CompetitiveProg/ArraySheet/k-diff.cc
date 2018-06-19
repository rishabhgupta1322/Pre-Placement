#include <bits/stdc++.h>
using namespace std;

int diff(vector<int> arr){
    int count=0;
    for(i=0;i<n-1;i++){
        for(j=i+1; j<n && (arr[j]-arr[i])<=key;j++){
            if(arr[j]-arr[i]==key)
                count++;
        }
    }
    return count;
}

int main(){
    int test,n,i,j,k,key,count;
    cin >> n;
    vector <int> arr(n);
    for(i=0;i<n;i++)
        cin >> arr[i];
    cin >> key;
    sort(arr.begin(),arr.end());
    cout << diff(arr) << endl;
    return 0;
}
