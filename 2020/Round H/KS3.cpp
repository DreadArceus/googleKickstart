#include <iostream>
#include <map>
using namespace std;
int calcXSteps(int l, map<int, int> grid, int n)
{
    int steps = 0;
    for(int i = l; i <= l + n - 1; i++)
    {
        auto it = grid.begin();
        while(it->second == 0)
        {
            it++;
        }
        steps += abs(it->first - i);
        it->second--;
    }
    return steps;
}
int main()
{
    int t = 0;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        int n = 0;
        cin >> n;
        map<int, int> gridX;
        map<int, int> gridY;
        for(int i = 0; i < n; i++)
        {
            int x = 0, y = 0;
            cin >> x >> y;
            gridX[x]++;
            gridY[y]++;
        }

        int lineY = 0;
        for(auto x : gridY)
        {
            lineY += x.first * x.second;
        }
        lineY /= n;
        int steps = 0;
        for(auto x : gridY)
        {
            steps += abs(x.first - lineY) * x.second;
        }

        int xSpacing = INT32_MAX;
        for(int lineX = -511; lineX <= 510; lineX++)
        {
            int loc = calcXSteps(lineX, gridX, n);
            if(loc < xSpacing)
            {
                xSpacing = loc;
            }
        }
        steps += xSpacing;

        cout << "Case #" << i << ": " << steps << "\n";
    }
}