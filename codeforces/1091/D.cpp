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
#define	   MODULUS	  1000000007


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
			y>=nx 
		) return false;
	return true;
	
}

int main(int argc, char *argv[]) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);	
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	
	ll n; cin >> n;
	ll dp[n+1];
	ll mod = 998244353;
	// 0 1,2,3,1,3,2,2,1,3,2,3,1,3,1,2,3,2,1]
	// 0 1 3 6 7 10 12 14 15 18 20 23 24 ... n(n+1)/2
	// 0 0 0 1 2 
	ll fact[n+1];
	fact[0]=1;
	FOR(i,1,n+1){
		fact[i]=(fact[i-1]*i);
		fact[i]%=mod;
	}
	dp[0]=1;
	FOR(i,1,n+1){
		dp[i] = i*dp[i-1]+fact[i]-i;
		dp[i]%=mod;
	}
	cout << dp[n]%mod;

	return 0;
}
