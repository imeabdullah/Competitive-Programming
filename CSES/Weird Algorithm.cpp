#include<iostream>

using namespace std;

void solve()
{
    long long n;
    cin>>n;
    
    cout<<n<<" ";
    if(n==1)
    {
        return;
    }
    while(n>1)
    {
        if(n&1)
        {
            n=(n*3)+1;
            cout<<n<<" ";
        }
        else
        {
            n=n/2;
            cout<<n<<" ";
        }
    }
}

int main()
{
    solve();
}