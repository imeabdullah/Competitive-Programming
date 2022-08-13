#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long

int main()
{
    BOOST;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int t;
    cin>>t;
    while(t--) {
        int n,q;
        cin>>n>>q;
        ll arr[n];

        for(int i = 0;i<n;i++) {
            cin>>arr[i];
        }

        sort(arr,arr+n,greater<int>());

        for(int i = 1;i<n;i++) arr[i]+=arr[i-1];

        while(q--) {
            ll x; cin >> x;
            int l = 1, r = n, ans = -1;
            while(l <= r) {
                int mid = (l + r) / 2;
                if(arr[mid - 1] >= x) {
                    ans = mid;
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            cout << ans << "\n";
        }
    }
}