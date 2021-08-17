#include <iostream>
#include <vector>
#include <cmath>
#include <math.h>
#include <set>
#include <unordered_map>
#include <map>
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
        int qualified = 0;
        int n, m, x;
        cin >> n >> m >> x;
        vector<pair<int, int>> v;
        vector<pair<int, int>> v1;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(make_pair(a, i + 1));
            if (a >= m)
            {
                qualified++;
            }
        }
        if (qualified >= x)
        {
            cout << qualified << " ";
        }
        else
        {
            cout << x << " ";
        }
        if (qualified >= x)
        {
            for (int i = 0; i < n; i++)
            {
                if (v[i].first >= m)
                {
                    cout << v[i].second << " ";
                }
            }
        }
        sort(v.begin(), v.end());
        int size = v.size();
        if (qualified < x)
        {
            for (int i = size - x; i < size; i++)
            {
                v1.push_back(make_pair(v[i].second, v[i].first));
            }
            sort(v1.begin(), v1.end());
            for (int i = 0; i < v1.size(); i++)
            {
                cout << v1[i].first << " ";
            }
        }

        cout << endl;
    }
    return 0;
}