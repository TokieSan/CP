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


void solve() {
	int n; cin >> n;
	int mx; cin >> mx;
	n*=2;
	while(n--) {
		int tmp; cin >> tmp;
		if(tmp==mx||tmp==7-mx) {
			cout << "NO";
			return;
		}
	}
	cout << "YES";
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

