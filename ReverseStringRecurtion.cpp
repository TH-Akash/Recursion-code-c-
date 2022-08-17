#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void reverse(string str){
    if(str.length()== 0){
        return ;
    }
    string roe=str.substr(1);
    reverse(roe);
    cout<<str[0];
}
int main(){
    string str;
    getline(cin,str);
    reverse(str);
}

