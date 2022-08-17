#include<bits/stdc++.h>
using namespace std;
int polynomialSeries(int a){
    if(a==1){
        return a;
    }
     if(a==2){
      cout<<"x"<<endl;
    }
   int ans=polynomialSeries(a-1)+polynomialSeries(a-2);
     return ans;
}
int main(){
    int a;
    cin>>a;
     polynomialSeries(a);
}
