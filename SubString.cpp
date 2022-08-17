#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void subsequence(string str,string ans){
    if(str.length()==0){
        cout<<ans<<endl;
        return ;
    }
    char ch=str[0];
    string ros =str.substr(1);
    subsequence(ros,ans);
    subsequence(ros,ans+ch);

}
int main(){
    subsequence("ABC","");

}
