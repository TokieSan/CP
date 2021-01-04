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
#define G(x) int x; cin >> x;

template <typename T> 

T **twoD(T x, T y) {
	T **TWODSET = new T*[x];
	tt(x) {
		TWODSET[i] = new T[y];
	}
	return TWODSET;
}


void solve() {
	G(r1); G(r2); G(c1); G(c2); G(d1); G(d2);
	bool c = true;
	FOR(i,1,10) {
		FOR(j,1,10) {
			FOR(k,1,10){
				FOR(ii,1,10) {
					if(
							i+j==r1 &&
							k+ii==r2 &&
							i+ii==d1 &&
							j+k==d2 &&
							i+k==c1 &&
							j+ii==c2 &&
							i!=j &&
							i!=k &&
							i!=ii &&
							j!=k &&
							j!=ii &&
							k!=ii
						) {
						printf("%d %d\n%d %d",i,j,k,ii);
						c = false;
						break;
					}
				}
			}
		}
	}
	if(c) cout << -1;
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

