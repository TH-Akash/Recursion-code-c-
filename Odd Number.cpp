#include<bits/stdc++.h>
using namespace std;
int oddNumber(int x){
    if(x%2==0){
        cout<<x<<" ";
    }
}
int main(){
    int a;
    cin>>a;
    while(a--){
        int x;
        cin>>x;
        oddNumber(x);
    }
}

