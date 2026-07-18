// - Md. Mehedi Hasan

#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
#define nl '\n'
#define sp " "
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<long long>
#define ip(x) for (auto &it : x) cin >> it
#define all(x) x.begin(), x.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(a) (int)a.size()
using ll = long long;
using ull = unsigned long long;

void solve()
{
    int n; cin >> n;
    vector<pll> time_line;
    for(int i = 0; i < n; i++)
    {
        ll st, et; cin >> st >> et;
        time_line.pb({st, 1});
        time_line.pb({et, -1});
    }
    sort(all(time_line));
    ll mx = LONG_LONG_MIN, curr = 0;
    for(int i = 0; i < 2 * n; i++)
    {
        curr += time_line[i].ss;
        mx = max(mx, curr);
    }
    cout << mx;
}

int main()
{
    Md_Mehedi_Hasan;

    solve();

    return 0;
}

// https://cses.fi/problemset/task/1619