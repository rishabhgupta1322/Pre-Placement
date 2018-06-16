#include <iostream>
#include <stack>
using namespace std;

int oper(int n1,char op,int n2){
    if(op == '+')
        return n1+n2;
    else if(op == '-')
        return n1-n2;
    else if(op == '*')
        return n1*n2;
    else if(op == '/')
        return n1/n2;
}

int main(){
    stack<int> operand;
    int n1,n2;
    string str;
    cin >> str;
    for(int i=0; i<str.size(); i++){
        if(str[i]>='0' && str[i]<='9')
            operand.push(str[i] - '0');
        else{
            n2 = operand.top(); operand.pop();
            n1 = operand.top(); operand.pop();
            operand.push( oper(n1, str[i], n2));
        }
    }
    cout << operand.top() << endl;
    return 0;
}
