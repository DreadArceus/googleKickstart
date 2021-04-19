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

void solveCase(int c)
{
    int n = 0;
    string s;
    cin >> n >> s;
    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--)
    {
        int len = 1;
        for(int j = i - 1; j >= 0; j--)
        {
            if(s[j] < s[j+1])
                len++;
            else
                break;
        }
        ans[i] = len;
    }
    cout << "Case #" << c << ": ";
    for (int x : ans)
    {
        cout << x << " ";
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