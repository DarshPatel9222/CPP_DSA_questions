#include<bits/stdc++.h>
using namespace std;

int Atoi(string s){
    int i=0,n=s.length();
    while(i<n && s[i]==' '){
        i++;
    }

    int sign=1;
    if(i<n && (s[i]=='+' || s[i]=='-')){
        if(s[i]=='-'){
            sign=-1;
        }
        i++;
    }

    long result=0;
    while(i<n && s[i]>='0' && s[i]<='9'){
        result=result*10+(s[i]-'0');
        i++;
    }
    return sign*result;
}

int main(){
    string s;
    cin>>s;
    cout<<Atoi(s);
}