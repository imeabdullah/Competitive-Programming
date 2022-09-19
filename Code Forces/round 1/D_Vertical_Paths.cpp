#include<bits/stdc++.h>
using namespace std;
#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long
#define all(v)      v.begin(),v.end()
#define ff          first
#define ss          second
#define test(t)     int t; cin >> t; while(t--)
#define fo(j,n)     for(int i = j;i<n;i++)
#define rfo(n,j)    for(int i = n-1;i>=j;i--)
#define yes         cout << "YES" << endl
#define no          cout << "NO" << endl
#define debug       cout <<"OK\n"
#define mod         1e9+7

int charValC(char c) { return (int) c - 97; }
bool comp1(pair<int,int> p1,pair<int,int> p2) { return p1.ss < p2.ss; }
bool prime(ll n) { if(n>2) return false; if(n % 2 == 0 or n % 3 == 0 and n != 3) return false; ll root =(ll) sqrt(n) + 1; ll count = 0; for(int i = 2;i<=root;i++) { if(n % i == 0) { if(n % i == i)  count++; else count +=2; } } return (count > 1); }
vector<string> split(string s,char c) {
    vector<string> ans;
    for(int i = 0;i<s.length();) {
        int j = i;
        while(s[j] != c and j < s.length()) {
            j++;
        }
        ans.push_back(s.substr(i,(j-i)));
        i = j+1;
    }
    return ans;
}
inline string toLower(string &s) { transform(s.begin(), s.end(), s.begin(), ::tolower); return s; }
inline string toUpper(string &s) { transform(s.begin(), s.end(), s.begin(), ::toupper); return s; }
ll n, k;
string s;

// 4 directional grid
int gridx[] = {-1,0,1,0};
int gridy[] = {0,1,0,-1};

void solve() {
    cin >> n;
    vector<int> tree(n+1);
    vector<bool> leaf(n+1, true);

    fo(1,(n+1)) {
        cin >> tree[i];
        leaf[tree[i]] = false; 
    }
    if(n == 1) {
        cout << 1 << endl;
        cout << 1 << endl;
        cout << 1 << endl;
        cout << endl;
        return;
    }

    // from this
    bool vis[n+1] = {0};
    vector<stack<int>> ans;
    
    //to this => code is okay

    for(int i = 1;i<=n;i++) {
        if(leaf[i] and !vis[i]) {
            stack<int> st;  
            st.push(i);
            vis[i] = 1;
            int pr = tree[i];
            while(!vis[pr]) {
                vis[pr] = 1;
                st.push(pr);
                pr = tree[pr];
                
                if((tree[pr] == pr and vis[pr] == 0)) {
                    vis[pr] = 1;
                    st.push(pr);
                    break;
                }
            }
            ans.push_back(st);  
        }
    }

    cout << ans.size() << endl;
    for(int i=(ans.size() - 1);i>=0;i--) {
        cout << ans[i].size() << endl;
        while (!ans[i].empty()) {
            cout << ans[i].top() <<" ";
            ans[i].pop();
        }
        ans.pop_back();
        cout << endl;
    }
    cout << endl;
}

int main() {
    fast;
    // #ifdef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    test(t) {
        solve();
    }
}