#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;
#define int long long
#define pii pair<int, int>
#define MAX_N 1000000

bool prime[MAX_N];

void solveCase(int c)
{
    int z = 0;
    cin >> z;
    int ans = 6, p1 = 2, p2 = 3;
    for(int i = 4; i < MAX_N; i++)
    {
        if(!prime[i]) continue;
        int newAns = i * p2;
        p1 = p2;
        p2 = i;
        if(newAns > z) break;
        ans = newAns;
    }
    cout << "Case #" << c << ": " << ans << "\n";
}

int32_t main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    memset(prime, true, sizeof(prime));
    for(int p = 2; p * p < MAX_N; p++)
    {
        if(!prime[p]) continue;
        for(int i = p*p; i < MAX_N; i+=p)
        {
            prime[i] = false;
        }
    }
    int t = 0;
    cin >> t;
    for (int c = 1; c <= t; c++)
        solveCase(c);
}