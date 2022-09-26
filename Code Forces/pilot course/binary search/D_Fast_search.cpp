#include<bits/stdc++.h>
using namespace std;
#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll          long long
#define endl        "\n"
#define fo(j,n)     for(int i = j;i<n;i++)
#define rfo(n,j)    for(int i = n-1;i>=j;i--)

//---------------------------macros-----------------------------
ll n, k;


int find_lower(vector<int>& v, int x) {
    int l = -1, r = v.size();
    while (r > l + 1) {
        int m = (l + r) / 2;
        if (v[m] > x) r = m;
        else l = m;
    }
    return l;
}

int find_upper(vector<int>& v, int x) {
    int l = -1, r = v.size();
    while (r > l + 1) {
        int m = (l + r) / 2;
        if (v[m] < x) l = m;
        else r = m;
    }
    return r;
}

void solve() {
    cin >> n;
    vector<int> vec(n);

    fo(0,n) cin >> vec[i];
    sort(vec.begin(), vec.end());

    cin >> k;

    fo(0,k) {
        int l, r;
        cin >> l >> r;
        int a = find_upper(vec, l);
        int b = find_lower(vec, r);

        cout << b - a + 1;
        cout << " ";
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