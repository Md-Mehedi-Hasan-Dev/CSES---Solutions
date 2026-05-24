#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
using ll = long long;

int main()
{
    Md_Mehedi_Hasan;

    ll n, t, ans, low, high; cin >> n >> t;
    vector<ll> v(n);
    for(ll &i : v)
        cin >> i;
    low = 0, high = (*max_element(v.begin(), v.end())) * t;
    ans = high;
    while(low <= high)
    {
        ll mid = low + (high - low) / 2;
        ll product = 0;
        for(ll i : v)
        {
            product += mid / i;
            if(product >= t) break;
        }
        if(product >= t)
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    cout << ans;

    return 0;
}

// https://cses.fi/problemset/task/1620