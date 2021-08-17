#include<iostream>
#include<vector>
#include<cmath>
#include<array>
typedef long long ll;
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0){
        ll n,p,k;
        cin>>n>>p>>k;
        ll ans=0;
        n = n-1;
        ll r = p%k;
        ll col = (n%k)+1;
        ll row = (n/k) +1;
        if(col>=r){
            ans += r*row;
        }
        else{
            ans = ans + col*row + (row-1)*(r-col);
        }
        cout<<(ans+(p/k)+1);
    }
    return 0;
}
