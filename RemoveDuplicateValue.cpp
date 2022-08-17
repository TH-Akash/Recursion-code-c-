#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

string removeDuplicate(string str){
    if(str.length()==0){
        return"";
    }

    char temp =str[0];
    string ans =removeDuplicate(str.substr(1));

    if(temp==ans[0]){
     return ans;
   }
   return (temp+ans);

}
int main(){
    string str;
    getline(cin,str);
    cout<<removeDuplicate(str);
}
