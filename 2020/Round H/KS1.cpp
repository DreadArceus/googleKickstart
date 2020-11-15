#include <iostream>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        int n = 0, k = 0, s = 0;
        cin >> n >> k >> s;
        cout << "Case #" << i << ": " << n + min(k, 2 * (k-s)) << "\n";
    }
}