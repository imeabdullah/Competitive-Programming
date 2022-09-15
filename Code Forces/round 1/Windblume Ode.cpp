
/**
 * This is unsolved
 * Try it letter
*/
#include<bits/stdc++.h>
using namespace std;
#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long
#define ff          first
#define ss          second
#define test(t)     int t; cin >> t; while(t--)
#define fo(j,n)     for(int i = j;i<n;i++)
#define rfo(n,j)    for(int i = n-1;i>=j;i--)
#define yes         cout << "YES" << endl
#define no          cout << "NO" << endl
#define mod         1e9+7


int n;
bool isPrime(ll n)
{
    int root = (int) sqrt(n) + 1;
    int count = 0;
    for(int i = 2;i<=root;i++)
    {
        if(n % i == 0)
        {
            if(n / i == i)
                count++;
            else
                count += 2;
        }
    }
    if(count > 1) return false;
    else return true;
}
void solve() 
{
    cin >> n;
    vector<int> vec(n);
    ll sum = 0;
    pair<int,int> odd;
    odd.ff = -1;
    odd.ss = INT_MAX;
    fo(0,n)
    {
        cin >> vec[i];
        sum += vec[i];
        if(vec[i] & 1)
        {
            if(vec[i] < odd.ss){
                odd.ss = vec[i];
                odd.ff = i;
            }
        }
    }
    if(isPrime(sum))
    {
        cout << n - 1 << endl;
        fo(0,n)
        {
            if(i != odd.ff)
                cout << i+1 <<" ";
        }
        cout << endl;
    }
    else
    {
        cout << n  << endl;
        fo(0,n)
        {
            cout << i+1 <<" ";
        }
        cout << endl;
    }

    
}

int main() 
{
    fast;
    #ifdef local
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    test(t)
    {
        solve();
    }
}