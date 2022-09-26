#include<bits/stdc++.h>
using namespace std;
#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long
#define fo(j,n)     for(int i = j;i<n;i++)

//---------------------------macros-----------------------------
ll n, k;

void solve() {
    cin >> n >> k;
    vector<int> vec(n);
    fo(0,n) cin >> vec[i];
    fo(0,k) {
        int x;
        cin >> x;
        int l = -1; // vec[l] < x
        int r = n; // vec[r] >= x

        while ((l+1) < r) {
            int mid = (l + r) / 2;
            if(vec[mid] < x) l = mid;
            else r = mid;
        }
        cout << r + 1 << endl;
        
    }
}

int32_t main() {
    fast;
    // #ifdef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    solve();
}