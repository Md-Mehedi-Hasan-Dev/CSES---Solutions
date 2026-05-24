#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    int t; cin >> t;
    vector<tuple<int, int, int>> intervals;
    vector<int> ans(t);

    for(int i = 0; i < t; i++)
    {
        int at, dt; cin >> at >> dt;
        intervals.push_back({at, dt, i});
    }

    sort(intervals.begin(), intervals.end());

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    int roomCount = 0;

    for(int i = 0; i < t; i++)
    {
        auto [at, dt, idx] = intervals[i];

        if(!pq.empty() && pq.top().first < at)
        {
            auto [endTime, roomid] = pq.top();
            pq.pop();

            ans[idx] = roomid;
            pq.emplace(dt, roomid);
        }
        else
        {
            roomCount++;
            ans[idx] = roomCount;
            pq.emplace(dt, roomCount);
        }
    }

    cout << roomCount << endl;
    for(auto room : ans)
        cout << room << " ";

    return 0;
}

// https://cses.fi/problemset/task/1164/