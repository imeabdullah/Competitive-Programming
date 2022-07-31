#include<bits/stdc++.h>

using namespace std;

void solve()
{
    string inp;
    cin>>inp;

    int maxSize=0;
    int currSize=1;

    if(inp.size()==1){
        cout<<1<<endl;
        return;
    }
    for(int i=1;i<inp.size();i++)
    {
        if(inp[i-1]==inp[i])
        {
            currSize++;
        }
        else
        {
            currSize=1;
        }
        if(maxSize<currSize)
            maxSize=currSize;
    }
    cout<<maxSize<<endl;
}
int main()
{
    solve();
}