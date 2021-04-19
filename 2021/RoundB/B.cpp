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
    cin >> n;
    vector<int> v(n);
    int maxlen = 0;
    int len = 1, d = 0, error = 1, errorId = -1;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int j = 0; j < n; j++)
    {
        for (int i = j + 1; i < n; i++)
        {
            int newD = v[i] - v[i - 1];
            if (error == 0 && errorId == i - 1)
            {
                if (v[i] - 2 * d != v[i - 2])
                    break;
                newD = d;
            }
            if (i == j + 1)
                d = newD;
            if (d == newD)
                len++;
            else
            {
                error--;
                len++;
                errorId = i;
                if (error < 0)
                    break;
            }
            if (i == n - 1 && error == 1 && j != 0)
            {
                len++;
                if (v[j] - v[j - 2] == 2 * d)
                    len++;
            }
            if (len > maxlen)
                maxlen = len;
        }
        d = 0;
        error = 1;
        errorId = -1;
        len = 1;
        if(maxlen >= min(n - j + 1, n))
            break;
    }
    cout << "Case #" << c << ": " << maxlen;
    cout << "\n";
}

int32_t main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 0;
    cin >> t;
    for (int c = 1; c <= t; c++)
        solveCase(c);
}