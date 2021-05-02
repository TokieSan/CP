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
#define sz(x) (int)(x).size()
#define GMi(x) int x; cin >> x;

template <typename T> 

T **twoD(T x, T y) {
	T **TWODSET = new T*[x];
	tt(x) {
		TWODSET[i] = new T[y];
	}
	return TWODSET;
}

const ll module = 1000000007ll;
ll mers[40] = {1,2,4,6,12,16,18,30,60,88,106,126,520,606,1278, 2202,2280,3216,4252,4422,9688,9940,11212,19936, 21700,23208,44496,86242,110502,132048,216090, 756838,859432,1257786,1398268,2976220,3021376, 6972592,13466916, 20996010};

ll p2(ll x) {
    ll s = 1, t = 2;
    while (x) {
        if (x&1) s = (s * t) % module;
        t = (t * t) % module;
        x >>= 1;
    }
    return s;
}
void solve() {
    ll x; cin >> x;
    cout << (p2(mers[x-1])-1+module) % module;
    return;
}

int main(int argc, char *argv[]) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);	
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	int t = 1;
	if(t==-1) cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}

