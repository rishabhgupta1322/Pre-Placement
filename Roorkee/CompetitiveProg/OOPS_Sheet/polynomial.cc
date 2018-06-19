#include <bits/stdc++.h>
using namespace std;

class polynomial{
    private:
        vector< pair<int,int> > a;

    public:

        polynomial(){

        }

        polynomial(vector< pair<int,int> > a){
            this->a = a;
        }

        ~polynomial(){

        }

        static bool compare(pair<int,int> x,pair<int,int> y){
            return x.second>y.second;
        }

        void set(){
            int x,y;
            bool flag=1;
            cout << "Enter coefficient and exp and -1 to end the input" << endl;
            while(flag){
                cin >> x;
                if(x==-1)
                    flag=0;
                if(flag){
                    cin >> y;
                    a.push_back(make_pair(x,y));
                }
            }
            sort(a.begin(),a.end(),compare);
        }

        void get(){
            for(int i=0;i<a.size();i++){
                cout << a[i].first << "X^" << a[i].second << " ";
            }
            cout << endl;
        }

        polynomial operator +(polynomial obj){
            polynomial res;
            int i=0, j=0;
            while(i<a.size() && j<obj.a.size()){
                if(a[i].second == obj.a[j].second){
                    res.a.push_back(make_pair(a[i].first + obj.a[j].first , a[i].second));
                    i++; j++;
                }else if(a[i].second > obj.a[j].second){
                    res.a.push_back(a[i]);
                    i++;
                }else{
                    res.a.push_back(obj.a[j]);
                    j++;
                }
            }
            while(i<a.size())
                res.a.push_back(a[i++]);
            while(j<obj.a.size())
                res.a.push_back(obj.a[j++]);
            return res;
        }

        polynomial operator -(polynomial obj){
            polynomial res;
            int i=0, j=0;
            while(i<a.size() && j<obj.a.size()){
                if(a[i].second == obj.a[j].second){
                    if(a[i].first - obj.a[j].first)
                        res.a.push_back(make_pair(a[i].first - obj.a[j].first , a[i].second));
                    i++; j++;
                }else if(a[i].second > obj.a[j].second){
                    res.a.push_back(a[i]);
                    i++;
                }else{
                    res.a.push_back(make_pair(obj.a[j].first*(-1),obj.a[j].second));
                    j++;
                }
            }
            while(i<a.size())
                res.a.push_back(a[i++]);
            while(j<obj.a.size())
                res.a.push_back(make_pair(obj.a[j].first*(-1),obj.a[j++].second));
            return res;
        }

        void operator +=(polynomial obj){
            polynomial res;
            int i=0, j=0;
            while(i<a.size() && j<obj.a.size()){
                if(a[i].second == obj.a[j].second){
                    res.a.push_back(make_pair(a[i].first + obj.a[j].first , a[i].second));
                    i++; j++;
                }else if(a[i].second > obj.a[j].second){
                    res.a.push_back(a[i]);
                    i++;
                }else{
                    res.a.push_back(obj.a[j++]);
                }
            }
            while(i<a.size())
                res.a.push_back(a[i++]);
            while(j<obj.a.size())
                res.a.push_back(obj.a[j++]);
            *this = res;
        }

        void operator -=(polynomial obj){
            polynomial res;
            int i=0, j=0;
            while(i<a.size() && j<obj.a.size()){
                if(a[i].second == obj.a[j].second){
                    if(a[i].first - obj.a[j].first)
                        res.a.push_back(make_pair(a[i].first - obj.a[j].first , a[i].second));
                    i++; j++;
                }else if(a[i].second > obj.a[j].second){
                    res.a.push_back(a[i++]);
                }else{
                    res.a.push_back(make_pair(obj.a[j].first* (-1) ,obj.a[j].second));
                    j++;
                }
            }
            while(i<a.size())
                res.a.push_back(a[i++]);
            while(j<obj.a.size())
                res.a.push_back(make_pair(obj.a[j].first*(-1),obj.a[j++].second));
            *this = res;
        }

        polynomial operator *(polynomial obj){
            polynomial res;
            int i,j,flag,size1=a.size(),size2=obj.a.size();
            for(i=0;i<size1;i++){
                for(int j=0;j<size2;j++){
                    flag=0;
                    for(int k=0;k<res.a.size();k++){
                        if(res.a[k].second == a[i].second+obj.a[j].second){
                            flag=1;
                            res.a[k].first += a[i].first * obj.a[j].first;
                        }
                    }
                    if(!flag){
                        res.a.push_back(make_pair(a[i].first * obj.a[j].first,a[i].second + obj.a[j].second));
                    }
                }
            }
            return res;
            sort(res.a.begin(),res.a.end(),compare);
        }

        void operator *=(polynomial obj){
            polynomial res;
            int i,j,flag,size1=a.size(),size2=obj.a.size();
            for(i=0;i<size1;i++){
                for(int j=0;j<size2;j++){
                    flag=0;
                    for(int k=0;k<res.a.size();k++){
                        if(res.a[k].second == a[i].second+obj.a[j].second){
                            flag=1;
                            res.a[k].first += a[i].first * obj.a[j].first;
                        }
                    }
                    if(!flag){
                        res.a.push_back(make_pair(a[i].first * obj.a[j].first,a[i].second + obj.a[j].second));
                    }
                }
            }
            sort(res.a.begin(),res.a.end(),compare);
            *this = res;
        }
};

int main(){
    polynomial eq1,eq2,eq3;
    eq1.set();
    eq2.set();
    eq1*=eq2;
    eq1.get();
    return 0;
}
