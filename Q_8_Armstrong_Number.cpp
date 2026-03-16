#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n=1634;
    string s=to_string(n);
    int x=s.length();
    int sum=0;

    for(int i=0;i<x;i++){
        int digit=s[i]-48;
        sum+=round(pow(digit,x));
    }

    if(sum==n){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}