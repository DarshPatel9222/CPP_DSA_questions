#include <iostream>
using namespace std;

string removeOuterParentheses(string s){
    string result="";
    int depth=0;

    for(char ch:s){
        if(ch=='('){
            depth++;
            if(depth>1){
                result+=ch;
            }
        }
        else{
            depth--;
            if(depth>0){
                result+=ch;
            }
        }
    }

    return result;
}

int main(){
    string s="(()())(())";
    cout<<removeOuterParentheses(s);
}