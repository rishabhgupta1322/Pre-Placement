#include<bits/stdc++.h>
using namespace std;

int first(vector<int> a,int beg,int end,int key){
   int mid;
   while(beg<=end){
    mid=(beg+end)/2;
    if((mid==0 || a[mid-1]<key) && a[mid]==key)
      return mid;
    else if(key>a[mid])
       beg=mid+1;
    else
       end=mid-1;
   }
   return -1;
}

int last(vector<int> a,int beg,int end,int key,int n){
   int mid;
   while(beg<=end){
    mid=(beg+end)/2;
    if((mid==n-1 || a[mid+1]>key) && a[mid]==key)
      return mid;
    else if(key<a[mid])
       end=mid-1;
    else
       beg=mid+1;
   }
   return -1;
}

int main(){
   int n,beg,end,test,key,i;
   cin >> n;
   vector<int> a(n);
   for(i=0;i<n;i++)
        cin >> a[i];
    cin >> key;
    beg=first(a,0,n-1,key);
    end=last(a,0,n-1,key,n);
    if(beg!=-1 && end!=-1)
        cout << key << " - " << end-beg+1 << endl;
    else
        cout << "Key not present" << endl;
    return 0;
}
