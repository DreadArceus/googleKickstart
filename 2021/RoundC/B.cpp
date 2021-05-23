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
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++)
        if (n % i == 0)
            cnt += (i % 2) + ((i * i != n) && ((n / i) % 2));
    cout << "Case #" << cn << ": " << cnt << "\n";
}

int32_t main()
{
    int t = 0;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solveCase(i);
}