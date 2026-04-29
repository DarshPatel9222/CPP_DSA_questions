#include <iostream>
using namespace std;

bool isAnagram(string s,string t){
    if(s.length()!=t.length()){
        return false;
    }

    int n=s.length();
    for(int i=0;i<n;i++){
        int count1=0;
        int count2=0;
        for(int j=0;j<n;j++){
            if(s[i]==s[j]){
                count1++;
            }
            if(s[i]==t[j]){
                count2++;
            }
        }
        if(count1!=count2){
            return false;
        }
    }
    return true;
}

int main(){
    string s="anagram",t="nagaram";
    if(isAnagram(s,t)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}