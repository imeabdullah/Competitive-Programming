#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n-1];
    for(int i=0;i<n-1;i++)
        cin>>arr[i];
    
    sort(arr,arr+(n-1));
    if(n==2)
    {
        cout<<(arr[0]==1?2:1);
        return;
    }
    for(int i=0;i<n-1;i++)
    {
        if((arr[i+1]-arr[i])!=1)
        {
            cout<<arr[i]+1<<endl;
            return;
        }
    }
}

int main()
{
    solve();
}