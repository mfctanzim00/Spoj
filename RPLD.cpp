#include<bits/stdc++.h>
#include<cstring>
//#define Mfc_Tanzim
typedef long long ll;
#define ull unsigned long long
#define pb push_back
#define ff first
#define ss second
#define all(v) (v.begin(), v.end())
#define pi acos(-1.0)
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define bug(a) cerr << #a << " : " << a << endl
#define pq dp
using namespace std;
const ll mxx = 1e5+10;

ll posx[] = {1,-1, 0, 0};
ll posy[] = {0, 0, 1,-1};

int main()
{
    //FastRead

#ifdef Mfc_Tanzim
    freopen("input.txt","r", stdin);
    // freopen("output.txt","w", stdout);
#endif /// Mfc_Tanzim

    ll t=1, n, k, m, a, b, c, d, cs = 1;
    cin >> t;
    set<ll>s;
    map<string, string>mp;

    while(t--){
              cin >> n >> k;
              map<pair<ll, ll>, bool>vis;
              bool ok = true;
              while(k--){
                       cin >> a >> b;
                       if(vis[{a, b}]){
                                  ok = false;
                       }
                       vis[{a, b}] = true;
              }
              printf("Scenario #%lld: ", cs++);
              cout << (ok? "possible" : "impossible") << endl;
    }
    return 0;
}
