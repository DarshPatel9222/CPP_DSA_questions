#include <iostream>
using namespace std;

string reverseWords(string s){
    string result="";
    string word="";

    for(int i=0;i<s.length();i++){
        if(s[i]!=' '){
            word+=s[i];
        }
        else{
            if(word!=""){
                if(result==""){
                    result=word;
                }
                else{
                    result=word+" "+result;
                }
                word = "";
            }
        }
    }
    if(word!=""){
        if(result==""){
            result=word;
        }
        else{
            result=word+" "+result;
        }
    }

    return result;
}

int main(){
    string s;
    cout<<"Enter string: ";

    getline(cin,s);
    cout<<"Output: "<<reverseWords(s);
}