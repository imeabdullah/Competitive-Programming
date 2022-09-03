#include<bits/stdc++.h>
using namespace std;
#define fast       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long
#define ff          fast
#define ss          second
#define test(t)     int t; cin >> t; while(t--)
#define fo(n)      for(int i = 0;i<n;i++)
#define local
int solve(int n) {
    if(n == 1) return 2;
 
    int rem = n % 3;
    if(rem == 0) return n / 3;
    return (n / 3) + 1;
}

int main() {
    fast;
    #ifdef local
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    test(t) {
        int x;
        cin >> x;
        cout << solve(x) << endl;
    }
}