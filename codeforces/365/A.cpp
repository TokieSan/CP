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

bool isItGood(int n, int k, string s) {
	if(s.length()<k) return false;
	set<int> ss;
	tt(sz(s)) {
		if(s[i]-'0'<=k) {
			ss.insert((int)s[i]-'0');
		}
	}
	if(sz(ss)==k+1) { ss.clear(); return true; }
	ss.clear();
	return false;
}
void solve() {
	GMi(n); GMi(k);
	string arr[n];
	tt(n) {
		cin >> arr[i];
	}
	int ctr = 0;	
	tt(n) {
		if(isItGood(n,k,arr[i])) ctr++;
	}
	cout << ctr;
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

