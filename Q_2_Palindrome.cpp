#include <bits/stdc++.h>
using namespace std;

int main(){
    string x;
    cout<<"Enter a number/string: ";
    cin>>x;

    int s=0;
    int e=x.length()-1;
    bool p=true;

    while(s<e){
        if(x[s]!=x[e]){
            p=false;
            break;
        }
        s++;
        e--;
    }

    if(p)
        cout << "Palindrome number";
    else
        cout << "Not a palindrome";
}