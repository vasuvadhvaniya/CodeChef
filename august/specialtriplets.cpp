#include <iostream>
#include <vector>
#include <cmath>
#include <array>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        int ans = 0;
        cin >> n;
        for (int c = 1; c <= n; c++)
        {
            for (int b = c; b <= n; b += c)
            {
                if (b % c == 0)
                {
                    for (int a = c; a <= n; a += b)
                    {
                        if (a % b == c)
                        {
                            ans++;
                        }
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
