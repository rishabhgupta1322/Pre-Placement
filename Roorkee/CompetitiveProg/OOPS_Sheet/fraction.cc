#include <bits/stdc++.h>
using namespace std;

template<class T>
T simplify(T obj){
    int t = __gcd(abs(obj.num),abs(obj.dem));
    obj.num /= t;
    obj.dem /= t;
    return obj;
}

class fraction{
    public:
        int num,dem;

        //Default constructor
        fraction(){
            cout << "Enter Numenator and Denominator\n";
            cin >> num >> dem;
        }

        //Parameterized constructor
        fraction(int num,int dem){
            this->num = num;
            this->dem = dem;
        }

        //Return Numerator
        int getNumerator(){
            return num;
        }

        //Return Denominator
        int getDenominator(){
            return dem;
        }

        friend fraction operator -(fraction,fraction);
        friend fraction operator +(fraction,fraction);
        friend fraction operator *(fraction,fraction);
        friend fraction operator /(fraction,fraction);
        friend bool operator <(fraction,fraction);
        friend bool operator >(fraction,fraction);
        friend bool operator <=(fraction,fraction);
        friend bool operator >=(fraction,fraction);
        friend bool operator ==(fraction,fraction);
        friend bool operator !=(fraction,fraction);

        fraction operator -(){
            this->num *= -1;
            return (*this);
        }

        fraction operator ++(){
            this->num += this->dem;
            *this = simplify(*this);
            return *this;
        }

        fraction operator --(){
            this->num -= this->dem;
            *this = simplify(*this);
            return *this;
        }

        fraction operator ++(int){
            this->num += this->dem;
            *this = simplify(*this);
            return *this;
        }

        fraction operator --(int){
            this->num -= this->dem;
            *this = simplify(*this);
            return *this;
        }

};


fraction operator +(fraction obj1, fraction obj2){
    fraction t;
    t.num = obj1.num*obj2.dem + obj2.num*obj1.dem;
    t.dem = obj1.dem*obj2.dem;
    t = simplify(t);
    return t;
}

fraction operator -(fraction obj1,fraction obj2){
    fraction t;
    t.num = obj1.num*obj2.dem - obj2.num*obj1.dem;
    t.dem = obj1.dem*obj2.dem;
    t = simplify(t);
    return t;
}

fraction operator *(fraction obj1,fraction obj2){
    fraction t;
    t.num = obj1.num*obj2.num;
    t.dem = obj1.dem*obj2.dem;
    t = simplify(t);
    return t;
}

fraction operator /(fraction obj1,fraction obj2){
    fraction t;
    t.num = obj1.num*obj2.dem;
    t.dem = obj1.dem*obj2.num;
    t = simplify(t);
    return t;
}

bool operator <(fraction obj1,fraction obj2){
    fraction t;
    t = obj1/obj2;
    t = simplify(t);
    if(t.num > t.dem)
        return true;
    else
        return false;
}

bool operator >(fraction obj1,fraction obj2){
    fraction t;
    t = obj1/obj2;
    t = simplify(t);
    if(t.num < t.dem)
        return true;
    else
        return false;
}

bool operator <=(fraction obj1,fraction obj2){
    fraction t;
    t = obj1/obj2;
    t = simplify(t);
    if(t.num >= t.dem)
        return true;
    else
        return false;
}

bool operator >=(fraction obj1,fraction obj2){
    fraction t;
    t = obj1/obj2;
    t = simplify(t);
    if(t.num <= t.dem)
        return true;
    else
        return false;
}

bool operator ==(fraction obj1,fraction obj2){
    fraction t;
    t = obj1/obj2;
    t = simplify(t);
    if(t.num == t.dem)
        return true;
    else
        return false;
}

bool operator !=(fraction obj1,fraction obj2){
    fraction t;
    t = obj1/obj2;
    t = simplify(t);
    if(t.num != t.dem)
        return true;
    else
        return false;
}

template<class T>
void sort(T &a,int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(a[j]>a[j+1])
            swap(a[j],a[j+1]);
        }
    }
}

int main(){
    fraction a(3,6),b(9,2),t;
    cout << "a  = " << a.getNumerator()<<"/" << a.getDenominator()<<endl;
    cout << "b  = " << b.getNumerator()<<"/" << b.getDenominator()<<endl;
    cout << "a+b -> ";
    t = a+b;
    cout << "t  = " << t.getNumerator()<<"/" << t.getDenominator()<<endl;
    t = a-b;
    cout << "a-b -> ";
    cout << "t  = " << t.getNumerator()<<"/" << t.getDenominator()<<endl;
    t = a*b;
    cout << "a*b -> ";
    cout << "t  = " << t.getNumerator()<<"/" << t.getDenominator()<<endl;
    t = a/b;
    cout << "a/b -> ";
    cout << "t  = " << t.getNumerator()<<"/" << t.getDenominator()<<endl;
    bool temp = b<a;
    cout << temp;
    return 0;
}
