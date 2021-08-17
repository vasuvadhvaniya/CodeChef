#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        long long ans = 0;
        long long n, m;
        cin >> n;
        cin >> m;
        vector<pair<long long,long long>> v;
        for (int i = 0; i < m; i++)
        {
            long long x,y;
            cin>>x>>y;
            v.push_back({x,y});
        }
        sort(v.begin(),v.end());
        long long filled = 0;
        long long lcm = 1;
        for (long long i = m - 1; i >= 0; i--)
        {
            long long x = v[i].first;
            long long y = v[i].second;
            lcm = (lcm * y) / (__gcd(y, lcm));
            long long aayega = n - (n / lcm) - filled;
            filled += aayega;
            ans = ans + aayega * x;
            if (filled == n)
            {
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
