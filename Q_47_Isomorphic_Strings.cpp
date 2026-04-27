#include <iostream>
using namespace std;

bool isIsomorphic(string s,string t){
    int n=s.length();

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(s[i]==s[j] && t[i]!=t[j]){
                return false;
            }
            if(s[i]!=s[j] && t[i]==t[j]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    string s="egg",t="add";

    if(isIsomorphic(s,t)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}