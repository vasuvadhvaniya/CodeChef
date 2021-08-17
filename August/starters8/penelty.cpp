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
        int team1 = 0;
        int team2 = 0;
        int arr[10];
        for (int i = 0; i < 10; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < 10; i++)
        {
            if (i % 2 == 0)
            {
                team1 += arr[i];
            }
            else
            {
                team2 += arr[i];
            }
        }
        if (team1 == team2)
        {
            cout << 0 << endl;
        }
        else if (team1 > team2)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }

    return 0;
}
