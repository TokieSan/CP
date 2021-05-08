#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef pair<int, int> pi;
typedef priority_queue<int> pq;
typedef priority_queue<int,vector<int>,greater<int> > pqr;

#define pb push_back
#define V vector
#define mp make_pair
#define F first
#define S second
#define tt(n) for (auto i=0; i<n; i++)
#define rtt(n) for (auto i=n-1; i>=0; ++i)
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
#define	   MODULUS	  1000000007

int n,m,k;
V<V<int> > adj;
V<ll> dist;
vi road;
map<pair<pi,int>, int> tri;

void dij(int s){
	priority_queue<pi, V<pi>, greater<pi>> p;
	p.push({0,s});
	dist[s]=0;
	road[s]=0;

	while(!p.empty()){
		int u = p.top().S;
		p.pop();

		for(auto v : adj[u]){
			if(dist[v]>dist[u]+1){
				dist[v]=dist[u]+1;
				p.push({dist[v], v});
				road[v]=u;
			}
		}
	}
}

int isIt(int s, int bef){
	map<int, int> m;
	for(auto v : adj[s]){
		m[v]++;
	}
	for(auto v : adj[bef])
		if(m[v]!=0&&v!=s&&tri[{{bef, v},s}]==0)
			return v;
	return -1;

}

int main(int argc, char *argv[]) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);	
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	cin >> n >> m >> k;
	adj.resize(n);
	dist.resize(n,INT_MAX);

	road.resize(n,-1);
	tt(m){
		int a; ll b; cin >> a >> b;
		a--; b--;
		adj[a].pb(b);
		adj[b].pb(a);
	}	

	tt(k){
		GGG(a,b,c);
		a--; b--; c--;
		tri[{{a,b}, c}]++;
	}
	dij(0);

	vi ans;
	int idx=n-1;
	if(road[idx]==-1){
		cout << -1 << "\n";
		return 0;
	}
	ans.pb(idx);

	while(idx!=0){
		ans.pb(road[idx]);
		idx =road[idx];
	}
	reverse(ans.begin(), ans.end());
	bool fixed=true;
	int bef=ans[0];
	FOR(i,1,ans.size()-1){
		if(tri[{{bef,ans[i]},ans[i+1]}] != 0){
			fixed=false;
			int x = isIt(ans[i], bef);
			if(x!=-1){
				ans.insert(ans.begin()+i, x);
				fixed = true;
				bef=ans[i];
				continue;
			}
			x=isIt(ans[i+1], ans[i]);
			if(x!=-1){
				ans.insert(ans.begin()+i+1, x);
				fixed = true;
				bef=ans[i];
				continue;
			}
			for(auto v:adj[ans[i]]){
				if(v!=bef&&v!=ans[i+1]){
					ans.insert(ans.begin()+i+1,ans[i]);
					ans.insert(ans.begin()+i+1,v);
					fixed=true;
					break;
				} 
			}	
		}
		bef=ans[i];
	}
	FOR(i,1,ans.size()-1){
		if(tri[{{ans[i-1],ans[i]},ans[i+1]}] != 0){
			cout << -1;
			return 0;
		}
	}

	if(!fixed){
		cout << -1;
		return 0;
	}

	cout << ans.size()-1 << '\n';
	FOR(i,ans.begin(), ans.end())
		cout << *i +1<< " ";


	return 0;
}
