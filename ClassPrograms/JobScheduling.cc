#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> a,pair<int,int> b){
	if(a.second==b.second)
		return a.first<b.first;
	return a.second < b.second;
}

int main(){
	int n,arr,dep,flag;
	cout << "Enter number of trains : ";
	cin >> n;
	vector < pair<int,int> > train,platform;
	cout << "Enter arrival time and departure time\n";
	for(int i=0;i<n;i++){
		cin >> arr >> dep;
		train.push_back(make_pair(arr,dep));
	}
	sort(train.begin(),train.end(),compare);
	for(int i=0;i<n;i++){
		if(platform.size()==0)
			platform.push_back(train[i]);
		else{
			flag=0;
			for(int j=0;j<platform.size() && !flag;j++){
				if(platform[j].second<=train[i].first)
					platform[j]=train[i], flag=1;
			}
			if(!flag)
				platform.push_back(train[i]);
		}
	}
	cout << platform.size() << endl;
	return 0;
}