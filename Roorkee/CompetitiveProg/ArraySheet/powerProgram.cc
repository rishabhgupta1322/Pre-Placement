#include <bits/stdc++.h>
using namespace std;

int check(int x[],int s1,int y[],int s2){
    sort(x,x+s1);
    sort(y,y+s2);
    int count=0;
    for(int i=0;i<s1-1;i++){
        for(int j=0;j<s2;j++){
            if((pow(x[i],y[j]) - pow(y[i],x[i])) > 0){
                count += s2-j;
                break;
            }
        }
    }
    return count;
}

int main(){
    int s1,s2;
    cin >> s1;
    int x[s1];
    for(int i=0;i<s1;i++)
        cin >> x[i];
    cin >> s2;
    int y[s2];
    for(int i=0;i<s2;i++)
        cin >> y[i];
    cout << check(x,s1,y,s2) << endl;
    return 0;
}
