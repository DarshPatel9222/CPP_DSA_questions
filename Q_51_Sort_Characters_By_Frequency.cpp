#include <iostream>
using namespace std;

string frequencySort(string s){
    char chars[100];
    int freq[100];
    int size=0;

    for(int i=0;i<s.length();i++){
        bool found=false;
        for(int j=0;j<size;j++){
            if(chars[j]==s[i]){
                freq[j]++;
                found=true;
                break;
            }
        }
        if(!found){
            chars[size]=s[i];
            freq[size]=1;
            size++;
        }
    }

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(freq[i]<freq[j]){
                swap(freq[i],freq[j]);
                swap(chars[i],chars[j]);
            }
        }
    }

    string result="";
    for(int i=0;i<size;i++){
        for(int j=0;j<freq[i];j++){
            result+=chars[i];
        }
    }

    return result;
}

int main(){
    string s="tree";
    cout<<frequencySort(s);
}