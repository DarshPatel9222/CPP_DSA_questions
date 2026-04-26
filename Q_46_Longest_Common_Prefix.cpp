#include <iostream>
using namespace std;

string longestCommonPrefix(string strs[],int n){
    if(n==0){
        return "";
    }
    string result="";
    for(int i=0;i<strs[0].length();i++){
        char ch=strs[0][i];
        for(int j=1;j<n;j++){
            if(i>=strs[j].length() || strs[j][i]!=ch){
                return result;
            }
        }
        result+=ch;
    }
    return result;
}

int main(){
    string strs[]={"flower","flow","flight"};
    int n=3;
    cout<<longestCommonPrefix(strs,n);
}