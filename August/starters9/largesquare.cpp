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
        int n, s;
        cin >> n >> s;
        int a = (int)sqrt(n);
        cout << a * s << endl;
    }
    return 0;
}
