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
#define G(x) int x; cin >> x;
#define GG(x,y) int x,y; cin >> x >> y;
#define GGG(x,y,z) int x,y,z; cin >> x >> y >> z;
#define tt2(nx,ny) \
	for(int i=0; i<nx; i++) \
		for(int j=0; j<ny; j++)	

#define    PI         3.14159265358979
#define    AREA(r)    (PI*(r)*(r))
#define	   MOD	1000000007

ll power(ll a, ll b){
    ll result=1;
    while(b){
        if(b%2) result*=a;
        a*=a;
        b/=2;
    }		
    return result;
}

//Euler Divide
ll div(ll &a, ll &b, ll &P){
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

V<V<char>> a,b;
int n,m;
V<tuple<int,int,int>> ans;
int check(int i, int j){
	int x =1;
	while(true){
		if(
				validLimits(i+x,j+x,n,m)
				&& validLimits(i-x,j-x,n,m)
				&& a[i+x][j]=='*'
				&& a[i-x][j]=='*'
				&& a[i][j-x]=='*'
				&& a[i][j+x]=='*')
			x++;
		else return x-1;
	}
}

void build(int i, int j, int s){
	ans.emplace_back(i+1,j+1,s);
	b[i][j]='*';
	FOR(x,1,s+1){
		if(validLimits(i+x, j+x, n, m)&& validLimits(i-x,j-x,n,m)){
			b[i+x][j]='*';
			b[i-x][j]='*';
			b[i][j-x]='*';
			b[i][j+x]='*';
		}			
	}
}

int main(int argc, char *argv[]) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);	
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	
	cin >> n >> m;
	a.resize(n, V<char>(m));
	b.resize(n, V<char>(m,'.'));
	tt2(n,m){
		cin >> a[i][j];
}
	
	tt2(n,m){
		if(a[i][j]!='*') continue;
		int x = check(i,j);
		if(x>=1)
			build(i,j,x);
	}

	tt2(n,m){
		if(a[i][j]!=b[i][j]){
			cout << -1;
			return 0;
		}
	}
cout << sz(ans) << '\n';
	for(auto u : ans){
		cout << get<0>(u)<<' ' <<  get<1>(u)<<' ' << get<2>(u)<<'\n';
	
	}

	return 0;
}
