#include <bits/stdc++.h>
using namespace std;

int first(int a[],int beg,int end,int key){
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

int last(int a[],int beg,int end,int key,int n){
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

int search(int arr[],int l,int h,int size){
    int mid = l+(h-l)/2,freq;
    freq = last(arr,l,h,arr[mid],size)-first(arr,l,h,arr[mid])+1;
    if(freq > size/4) return arr[mid];
    freq = last(arr,l,h,arr[mid/2],size)-first(arr,l,h,arr[mid/2])+1;
    if(freq > size/4) return arr[mid/2];
    freq = last(arr,l,h,arr[(3*mid)/2],size)-first(arr,l,h,arr[(3*mid)/2])+1;
    if(freq > size/4) return arr[(3*mid)/2];
    return -1;
}

int main(){
    int arr[]={1,2,3,3,3,4,5,6,8,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << search(arr,0,size-1,size) << endl;
    return 0;
}
