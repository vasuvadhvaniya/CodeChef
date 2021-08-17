#include <iostream>
#include <vector>
#include <cmath>
#include <math.h>
#include <set>
#include <unordered_map>
#include <map>
#include <queue>
#include <array>
#include <algorithm>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, q;
        cin >> n >> m >> q;
        int capacity = 0;
        bool b = false;
        bool entered[n];
        for (int i = 0; i < n; i++)
        {
            entered[i] = false;
        }
        for (int i = 0; i < q; i++)
        {
            char c;
            int a;
            cin >> c;
            cin >> a;
            if (!b)
            {
                if (c == '-' && entered[a - 1] == false)
                {
                    b = true;
                    cout << "Inconsistent" << endl;
                }
                else if (c == '-' && entered[a - 1] == true)
                {
                    entered[a - 1] = false;
                    capacity--;
                }
                else
                {
                    entered[a - 1] = true;
                    capacity++;
                }
                if (capacity > m)
                {
                    b = true;
                    cout << "Inconsistent" << endl;
                }
            }
        }
        if (b == false)
        {
            cout << "Consistent" << endl;
        }
    }
    return 0;
}
