#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
string moveAllXInEnd(string str){
    if(str.length()==0){
        return"";
    }
    char ch=str[0];
    string ans=moveAllXInEnd(str.substr(1));
    if(ch=='x'){
        return ans+ch;
    }
    return ch+ans;
}

int main(){
    string str;
    getline(cin,str);
    cout<<moveAllXInEnd(str)<<endl;


}
