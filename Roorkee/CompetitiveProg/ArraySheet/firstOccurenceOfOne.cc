#include <bits/stdc++.h>
using namespace std;

int check(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i] == 1)
            return i;
        else if(arr[i]!=0 && arr[i]!=1)
            return -2;
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    cout << check(arr,n) << endl;
    return 0;
}
