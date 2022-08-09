#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<1<<"\n";
        return 0;
    }
    if(n<4 and n>1){
        cout<<"NO SOLUTION\n";
        return 0;
    }
    if(n==4){
        cout<<"2 4 1 3\n";
        return 0;
    }
    vector<int> odd;
    vector<int> even;

    for(int i=1;i<=n;i++){
        if(i&1==1)
            odd.push_back(i);
        else even.push_back(i);
    }
    for(int i=0;i<odd.size();i++){
        cout<<odd[i]<<" ";
    }
    for(int i=0;i<even.size();i++){
        cout<<even[i]<<" ";
    }

}