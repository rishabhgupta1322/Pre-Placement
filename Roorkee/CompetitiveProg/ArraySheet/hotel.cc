#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> a,pair<int,int> b){
    if(a.second == b.second)
        return a.first<b.first;
    return a.second<b.second;
}

bool check(vector< pair<int,int> > a,int k){
    vector< pair<int,int> > room;
    int flag;
    for(int i=0;i<a.size();i++){
        flag=1;
        for(int j=0;j<room.size();j++){
            if(room[j].second <= a[i].first){
                flag = 0;
                room[j] = a[i];
            }
        }
        if(flag)
            room.push_back(a[i]);
        if(room.size()>k) return false;
    }
    return true;
}

int main(){
    vector<pair<int,int> > hotel;
    int x,n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        hotel.push_back(make_pair(x,0));
    }
    for(int i=0;i<n;i++){
        cin >> x;
        hotel[i].second = x;
    }
    sort(hotel.begin(),hotel.end(),compare);
    cout << "Enter number of rooms : ";
    cin >> x;
    if(check(hotel,x))
        cout << "Enough Rooms for the demand" << endl;
    else
        cout << "Rooms are not enough to satisfy the demand" << endl;
    return 0;
}
