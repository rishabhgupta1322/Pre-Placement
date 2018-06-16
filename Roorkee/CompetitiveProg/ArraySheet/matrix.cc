#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n,flag;
    cout << "Enter size of matrix\n";
    cin >> m >> n;
    int mat[m][n];
    vector< pair<int,int> > a;
    cout << "Enter Matrix Element\n";
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin >> mat[i][j];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            flag=0;
            for(int k=0;k<a.size();k++){
                if(a[k].first == mat[i][j]){
                    a[k].second += 1;
                    flag=1;
                }
            }
            if(!flag)
                a.push_back(make_pair(mat[i][j],1));
        }
    }
    cout << "Unique values are : ";
    for(int i=0;i<a.size();i++)
        if(a[i].second == 1)
            cout << a[i].first << " ";
    cout << endl;
    return 0;
}
