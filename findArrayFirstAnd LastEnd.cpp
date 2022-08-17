#include<bits/stdc++.h>
using namespace std;
int  firstooc(int array[],int n,int i,int key){
    if(i==n){
       return -1;
    }
    if(array[i]==key){
       return i;
    }
    return firstooc(array,n,i+1,key);
}
int lastooc(int array[],int n,int i,int key ){
    if(i==n){
        return -1;
    }
    int restArray= lastooc(array,n,i+1,key);
    if(restArray!=-1){
        return restArray;
    }
    if(array[i]==key){
        return i;
    }
    return -1;
}

int main(){
    int array[]={4,2,1,2,5,2,7};
    cout<<firstooc(array,6,0,2)<<endl;
      cout<<lastooc(array,6,0,2)<<endl;

}
