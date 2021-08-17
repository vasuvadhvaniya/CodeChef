#include<iostream>
#include<vector>
#include<cmath>
#include <unordered_map>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        int charge[n];
        int spend[n];
        int ans=0;
        int tct=0;
        vector< pair<int, pair<int,int>>>v;
        for(int i=0; i<n; i++){
            cin>>charge[i];
        }
        for(int i=0; i<n; i++){
            cin>>spend[i];
        }
        for(int i=0; i<n; i++){
            if(spend[i]<charge[i]){
                continue;
            }
            else{
                v.push_back(make_pair(charge[i], make_pair(spend[i],i+1))); 
            }
        }
        sort(v.begin(),v.end());
        /*for(auto x : v){
            cout<<x.first<<" "<<x.second.first<<" "<<x.second.second<<endl;
        }*/
        int size=v.size();
        int maxspend=v[size-1].second.first;
        for(int i=0; i<size; i++){
            if(tct<maxspend){
                tct += v[i].first;
                if(tct>maxspend){
                    break;
                }
            }
        }
    }
    return 0;
}
