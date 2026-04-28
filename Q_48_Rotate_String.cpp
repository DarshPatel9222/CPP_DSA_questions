#include <iostream>
using namespace std;

bool rotateString(string s,string goal){
    if(s.length()!=goal.length()){
        return false;
    }
    int n=s.length();

    for(int i=0;i<n;i++){
        char first=s[0];
        for(int j=0;j<n-1;j++){
            s[j]=s[j+1];
        }
        s[n-1]=first;

        bool same=true;
        for(int k=0;k<n;k++){
            if(s[k]!=goal[k]){
                same=false;
                break;
            }
        }
        if(same){
            return true;
        }
    }
    return false;
}

int main(){
    string s="abcde",goal="cdeab";

    if(rotateString(s,goal)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}