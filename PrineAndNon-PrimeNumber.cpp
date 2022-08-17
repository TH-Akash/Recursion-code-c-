#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while(a--)
    {
        int n;
        cin>>n;
        bool flag=0;
        for(int i=2; i<=sqrt(n); i++)
        {
            if(n%i==0)
            {
                cout<<"NoN-Prime"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"Prime"<<endl;
        }

    }


}
