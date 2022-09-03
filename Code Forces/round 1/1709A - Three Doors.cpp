#include<bits/stdc++.h>
using namespace std;
#define fast       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long
#define ff          first
#define ss          second
#define test(t)     int t; cin >> t; while(t--)
#define fo(n)       for(int i = 0;i<n;i++)
#define rfo(n)      for(int i = n-1;i>=0;i--)
#define yes         cout << "YES" << endl
#define no          cout << "NO" << endl
#define mod         1e9+7
#define local

int n;

int main() {
    fast;
    #ifdef local
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    test(t) {
        int x;
        cin >> x;
        int keys[3];
        fo(3) {
            cin >> keys[i];
        }
        bool f = 1;
        fo(3) {
            if(keys[x-1] == 0 and i != 2) {
                f = 0;
                break;
            }
            x = keys[x-1];
        }
        if(f) yes;
        else no;
    }
}