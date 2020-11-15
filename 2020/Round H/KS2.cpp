#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        long long l = 0, r = 0;
        cin >> l >> r;
        long long cnt = 0;
        for(long long x = l; x <= r; x++)
        {
            string s = to_string(x);
            bool boring = true;
            for(int pos = 1; pos <= s.length(); pos++)
            {
                if(pos % 2 == 0)
                {
                    if((s[pos - 1] - '0') % 2 != 0)
                    {
                        boring = false;
                        break;
                    }
                }
                else
                {
                    if((s[pos - 1] - '0') % 2 == 0)
                    {
                        boring = false;
                        break;
                    }
                }
            }
            if(boring)
            {
                cnt++;
            }
        }
        cout << "Case #" << i << ": " << cnt << "\n";
    }
}