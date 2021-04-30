#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef pair<int, int> pi;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define tt(n) for (int i=0; i<n; i++)
#define rtt(n) for (int i=n-1; i>=0; ++i)
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

template <typename T> 

T **twoD(T l, int x, int y) {
	T **TWODSET = new T*[x];
	tt(x) {
		TWODSET[i] = new T[y];
	}
	return TWODSET;
}

bool validLimits(int x, int y, int nx, int ny) {
	if(
			x<0 ||
			x>=nx ||
			y<0 ||
			y>=nx 
		) return false;
	return true;
	
}

void checkMyNeighbors(int **a, int i, int j, int N) {
	int pt[] = {-1,0,1};
	int ptt[] = {-1,0,1};
	//validState
	if(!validLimits(i,j,N,N)) return;
	//manipulator
	// a[i][j]='x';
	
	//remember to add your shit's limits
	FOR(k,0,3) {
		FOR(kk,0,3) {
			checkMyNeighbors(a,i+pt[k],j+ptt[kk],N);
		}
	}
}
vi ans;
vi vis;
bool ch = false, ch2=true;
bool dfs(vector<vi> &g, int s, int c){
	if(ans.size()!=0)
		return false;
	vis[s-1]++;
	if(vis[s-1]>2){
		ch2=false;
		return false;
	}
	if(g[s-1].size()==0){
		ch = true;
		if(c%2==0){
			ans.pb(s);
			return true;
		}
		return false;
	}

	for(int i=0; i<g[s-1].size(); i++){
		if(dfs(g,g[s-1][i],c+1)){
				ans.pb(s);
				return true;
		}
	}
	return false;
}

void solve() {
	GG(n,m);
	vector<vi> g(n);
	vis.resize(n,0);
	tt(n){
		G(c);
		FOR(j,0,c){
			G(t);
			g[i].pb(t);
		}			
	}
	G(s);
	if(dfs(g,s,1)){
		cout << "Win\n";
		FOR(i,ans.rbegin(),ans.rend())
			cout << *i << " ";
	} else {
		!(ch&&ch2)?cout << "Draw":cout << "Lose";
	}
}

int main(int argc, char *argv[]) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);	
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	int t = 1 ;
	if(t==-1) cin >> t;
	tt(t) {
		//cout << "Case " << i+1 << ": " << solve();
		solve();
	}
	return 0;
}
