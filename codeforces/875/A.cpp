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

int main(int argc, char *argv[]) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);	
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	
	ll n; cin >> n;
	vi ans;
	for(int i=1; i<=1000; i++){
		ll N = n-i;
		ll sum=0;
		while(N){    
			sum+=N%10;    
			N/=10;    
		}
		if(sum==i) ans.pb(n-i);
	}
	cout << ans.size() << '\n';
	sort(all(ans));
	for(auto u : ans){
		cout << u << '\n';
	}
	return 0;
}
