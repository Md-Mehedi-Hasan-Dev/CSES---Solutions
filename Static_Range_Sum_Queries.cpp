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
    ll n, q; cin >> n >> q;
    vll v(n + 1), pref(n + 1, 0);
    for(int i = 1; i <= n; i++)
    {
        cin >> v[i];
        pref[i] = v[i] + pref[i - 1];
    }
    auto range_sum = [&] (int l, int r){
        return pref[r] - pref[l - 1];
    };
    while(q--)
    {
        int a, b; cin >> a >> b;
        cout << range_sum(a, b) << nl;
    }
}

int main()
{
    Md_Mehedi_Hasan;

    solve();

    return 0;
}

// https://cses.fi/problemset/task/1646