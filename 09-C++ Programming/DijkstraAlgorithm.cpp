
// Dijkstra algorithm in c++

#include <bits/stdc++.h>
using namespace std;

using ull = long long;

const int maxn = 1000111;

int n, m, a, b, start, visi[maxn];
ull c, dist[maxn];
vector<pair<int, ull>> v[maxn];

void dijsktra(int st)
{
    for (int i = 1; i <= n; i++)
    {
        dist[i] = 1LL << 60;
        visi[i] = 0;
    }
    priority_queue<pair<ull, int>> pq;
    pq.push({0, st});
    dist[st] = 0;
    visi[st] = 1;
    while (!pq.empty())
    {
        int w = -pq.top().second;
        pq.pop();
        if (visi[w])
            continue;
        visi[w] = 1;
        for (auto i : v[w])
        {
            if (dist[i.first] > dist[w] + i.second)
            {
                dist[i.first] = dist[w] + i.second;
                pq.push({-dist[i.first], i.first});
            }
        }
    }
}

int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= m; i++)
    {
        scanf("%d%d%lld", &a, &b, &c);
        v[a].push_back({b, c});
    }
    scanf("%d", &start);
    dijsktra(start);
    for (int i = 1; i <= n; i++)
        printf("%lld\n", dist[i]);
    return 0;
}