#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;
#define int long long
#define pii pair<int, int>

struct edge
{
    int c1, c2;
    int load;
    int cost;
};

struct node
{
    set<int> connected;
    vector<pii> tax;
};

void solveCase(int c)
{
    int n = 0, q = 0;
    cin >> n >> q;
    vector<edge> v(n - 1);
    vector<node> tree(n, {set<int>(), vector<pii>(n)});
    for (int i = 0; i < n - 1; i++)
    {
        int x = 0, y = 0, l = 0, a = 0;
        cin >> x >> y >> l >> a;
        v[i] = {x, y, l, a};
        tree[x - 1].connected.insert(y - 1);
        tree[x - 1].tax[y - 1] = make_pair(l, a);
        tree[y - 1].connected.insert(x - 1);
        tree[y - 1].tax[x - 1] = make_pair(l, a);
    }
    cout << "Case #" << c << ": ";
    while (q--)
    {
        int c = 0, w = 0;
        cin >> c >> w;
        int ans = 0;
        while (c != 1)
        {
        }
        cout << ans << " ";
    }
    cout << "\n";
}

int32_t main()
{
    int t = 0;
    cin >> t;
    for (int c = 1; c <= t; c++)
        solveCase(c);
}