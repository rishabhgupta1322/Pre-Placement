#include <bits/stdc++.h>
using namespace std;

class sett{
    vector<char> arr;
    int size;

    public:

        sett(){
            size = 0;
        }

        void insert(char temp){
            vector<char>::iterator it;
            it = find(arr.begin(),arr.end(),temp);
            if(it == arr.end() || !arr.size())
                arr.push_back(temp);
            sort(arr.begin(),arr.end());
            size++;
        }

        void output(){
            for(int i=0;i<arr.size();i++)
                cout << arr[i] << " ";
            cout << endl;
        }

        sett operator +(sett obj){
            sett res;
            int i=0,j=0;
            while(i<size && j<obj.size){
                if(arr[i] == obj.arr[j]){
                    res.arr.push_back(arr[i++]);
                    j++;
                }else if(arr[i] < obj.arr[j])
                    res.arr.push_back(arr[i++]);
                else
                    res.arr.push_back(obj.arr[j++]);
                res.size++;
            }
            while(i<size)
                res.arr.push_back(arr[i++]);
            while(j<obj.size)
                res.arr.push_back(obj.arr[j++]);
            return res;
        }

        sett operator +(char ch){
            if((find(arr.begin(),arr.end(),ch) == arr.end() || !size))
                arr.push_back(ch);
            sort(arr.begin(),arr.end());
            return *this;
        }

        sett operator *(sett obj){
            sett res;
            int i=0,j=0;
            while(i<size && j<obj.size){
                if(arr[i] == obj.arr[j]){
                    res.arr.push_back(arr[i++]);
                    j++;
                    res.size++;
                }else if(arr[i] < obj.arr[j])
                    i++;
                else
                    j++;
            }
            return res;
        }

        sett operator -(sett obj){
            sett res;
            int i=0,j=0;
            res.size = size;
            while(i<size && j<obj.size){
                if(arr[i] < obj.arr[j])
                    res.arr.push_back(arr[i++]);
                else if(arr[i] == obj.arr[j]){
                    i++; j++;
                }else
                    j++;
            }
            return res;
        }

        int getSize(){
            return size;
        }

        void erase(){
            arr.clear();
            size = 0;
        }

        bool isEmpty(){
            if(size) return false;
            return true;
        }

        bool operator <=(sett obj){
            for(int i=0;i<size;i++){
                if(find(obj.arr.begin(),obj.arr.end(),arr[i]) == obj.arr.end())
                    return false;
            }
            return true;
        }

        bool operator ==(sett obj){
            if(size != obj.size)
                return false;
            for(int i=0;i<size;i++){
                if(arr[i] != obj.arr[i])
                    return false;
            }
            return true;
        }

        bool isMember(char ch){
            if(find(arr.begin(),arr.end(),ch) == arr.end())
                return false;
            return true;
        }

};

int main(){
    sett a,b,c;
    a.insert('x');
    a.insert('y');
    a.output();
    a.output();
    b.insert('y');
    b.output();
    c = c + 'a';
    c.output();
    return 0;
}
