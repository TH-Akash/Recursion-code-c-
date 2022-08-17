#include<bits/stdc++.h>
using namespace std;
int number(int n)
{
    if(n==0){
        return n;
    }
    int ans= number(n-1);
    return ans;

}

int main()
{
    int a;
    cin>>a;
    number(a);
    cout<<number(a)<<endl;


}

