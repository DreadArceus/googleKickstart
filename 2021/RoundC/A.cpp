#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;
#define int long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

int n, m, x, k, l, r;
bool f1, f2, f3;
string s, s1, s2;
vector<int> v, v1, v2;
set<int> se, se1, se2;
map<int, int> mp1, mp2;
void initiateCase()
{
    n = m = x = k = l = r = 0;
    f1 = f2 = f3 = false;
    s = s1 = s2 = string();
    v = v1 = v2 = vector<int>();
    se = se1 = se2 = set<int>();
    mp1 = mp2 = map<int, int>();
}

void solveCase(int cn)
{
    initiateCase();
    cin >> n >> k >> s;
    int ans = 0;
    if (n == 1)
    {
        ans = min((int)s[0] - 'a', k);
    }
    else
    {
        for (int i = 0; i < n / 2; i++)
        {
            ans += min((int)s[i] - 'a', k) *
                   pow(k, (n - 2 * (i + 1) + 1) / 2);
        }
        if (n % 2)
            ans += min((int)s[n / 2] - 'a' + (s[n / 2 - 1] < s[n - n / 2]), k);
        else
            ans += (s[n / 2 - 1] < s[n / 2]);
    }
    cout << "Case #" << cn << ": " << ans << "\n";
}

int32_t main()
{
    int t = 0;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solveCase(i);
}