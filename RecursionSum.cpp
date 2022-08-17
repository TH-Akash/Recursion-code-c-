#include<bits/stdc++.h>
using namespace std;
int  sum(int n){
    if(n==0){
        return 0;
    }
    int PrevSum =sum(n-1);
    return n+PrevSum;
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
}

