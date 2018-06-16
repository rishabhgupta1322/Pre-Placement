#include <iostream>
#include <stack>
using namespace std;

int main(){
    int flag = 0;
    stack<char> st;
    string str;
    cin >> str;
    for(int i=0;i<str.size();i++){
        if(str[i]=='(')
            st.push(str[i]);
        else if(str[i]==')' && !st.empty())
            st.pop();
        else if(st.empty() && str[i]==')'){
            flag=1;
            break;
        }
    }
    if(st.size() || flag)
        cout << "Paranthesis is not balanced" << endl;
    else
        cout << "Paranthesis is balanced" << endl;
    return 0;
}
