#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;
int main(){
    int n;
    cin>>n;
    int sub=pow(2,n);

    for(int i=0;i<sub;i++){
        for(int j=n-1;j>=0;j--){
            if((i&(1<<j))!=0)
                cout<<1;
            else
                cout<<0;
        }
        cout<<endl;
    }
}