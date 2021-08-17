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
        ll xa, ya, xb, yb, xc, yc;
        cin >> xa >> ya >> xb >> yb >> xc >> yc;
        if ((xa == xb || xb == xc) && ((yb - ya) * (yc - yb) >= 0))
        {
            cout << "YES" << endl;
        }
        else if ((ya == yb || yb == yc) && ((xb - xa) * (xc - xb) >= 0))
        {
            cout << "YES" << endl;
        }
        else if (ya == yb && yb == yc)
        {
            if (xb <= xc && xb >= xa)
            {
                cout << "YES" << endl;
            }
            if (xb <= xa && xb >= xc)
            {
                cout << "YES" << endl;
            }
        }
        else if (xa == xb && xb == xc)
        {
            if (yb <= yc && yb >= ya)
            {
                cout << "YES" << endl;
            }
            if (yb <= ya && yb >= yc)
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}