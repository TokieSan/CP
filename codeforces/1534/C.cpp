#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef priority_queue<int> pq;

#define pb push_back
#define V vector
#define mp make_pair
#define F first
#define S second
#define tt(n) for (int i=0; i<n; i++)
#define rtt(n) for (int i=n-1; i>=0; i--)
#define FOR(i,a,n) for (auto i=a; i!=n; i++)
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define _mem(a,n) memset(a,n,sz(a))
#define G(x) int x; cin >> x;
#define GG(x,y) int x,y; cin >> x >> y;
#define GGG(x,y,z) int x,y,z; cin >> x >> y >> z;
#define tt2(nx,ny) \
	for(int i=0; i<nx; i++) \
		for(int j=0; j<ny; j++)	

#define    PI         3.14159265358979
#define    AREA(r)    (PI*(r)*(r))
#define	   MOD	  1000000007

ll power(ll a, ll b){
    ll result=1;
    while(b){
        if(b%2) result*=a;
        a*=a;
		a%=MOD;
        b/=2;
    }		
    return result%MOD;
}

template <typename T>
//Euler Divide
T div(T &a, T &b, T &P){
	return a*power(b, P-2)%P;
}

template <class T> 
bool sortbysec(const pair<T,T> &a, const pair<T,T> &b){
	return (a.second < b.second);
}

bool isFraction(double &a){
	if(a==static_cast<int>(a))	return true;
	else return false;
}

bool validLimits(int x, int y, int nx, int ny) {
	if(
			x<0 ||
			x>=nx ||
			y<0 ||
			y>=ny 
		) return false;
	return true;
	
}

ll add(ll x, ll y) {
	x += y;
	if (x >= MOD) return x - MOD;
	return x;
}
ll sub(ll x, ll y) {
	x -= y;
	if (x < 0) return x + MOD;
	return x;
}
ll mul(ll x, ll y) {	
	return (x * y) % MOD;
}

template <class T>
void print(V<T> &a){
	FOR(i, a.begin(), a.end())
		cout << *i << ' ';
	cout << '\n';
}

V<vi> adj;
vi vis;
int n;

void dfs(int u){
	vis[u]=1;
	for(auto v : adj[u]){
		if(!vis[v])
			dfs(v);
	}
}

void solve() {
	cin >> n;
	int a[n], b[n];
	adj.resize(n);
	vis.resize(n,0);
	tt(n){
		cin >> a[i];
		a[i]--;
	}
	tt(n){ cin >> b[i];b[i]--;}
	tt(n){
		adj[a[i]].pb(b[i]);
		adj[b[i]].pb(a[i]);
	}
	int x=0;

	for(int i=0; i<n; i++){
		if(!vis[i]){
			x++;
			dfs(i);
		}
	}
	ll ans=1;
	while(x--){
		ans*=2;
		ans%=MOD;
	}
	cout << ans << '\n';
	vis.clear();
	adj.clear();
}

int main(int argc, char *argv[]) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);	
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	int t = -1;
	if(t==-1) cin >> t;
	tt(t) {
		//cout << "Case " << i+1 << ": " << solve();
		solve();
	}
	return 0;
}