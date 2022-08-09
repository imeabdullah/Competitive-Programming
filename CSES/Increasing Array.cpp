#include<bits/stdc++.h>

using namespace std;
void solve()
{
    int n;
    cin>>n;
    long long arr[n];

    for(int i=0;i<n;i++) cin>>arr[i];

    long long count=0;

    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            count+=arr[i-1]-arr[i];
            arr[i]=arr[i-1];
        }else continue;
    }
    cout<<count<<endl;
}
int main()
{
    solve();
}