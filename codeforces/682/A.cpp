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
#define GMi(x) ll x; cin >> x;

template <typename T> 

T **twoD(T x, T y) {
	T **TWODSET = new T*[x];
	tt(x) {
		TWODSET[i] = new T[y];
	}
	return TWODSET;
}


void solve() {
	ll rem1[5], rem2[5];
	GMi(n); GMi(m);
	ll cnt1 = m/5;
	ll r1 = m%5;
	rem1[0]=rem1[1]=rem1[2]=rem1[3]=rem1[4]=cnt1;
	for(int i = 1; i <= r1; ++i)
		++rem1[i];
	  
	ll cnt2 = n/5; ll r2 = n%5;
	rem2[0]=rem2[1]=rem2[2]=rem2[3]=rem2[4]=cnt2;
	
	FOR(i,1,r2+1)
		++rem2[i];
	  
	ll ans = 0;
	ans += (rem1[1] * rem2[4]);
	ans += (rem1[2] * rem2[3]);
	ans += (rem1[3] * rem2[2]);
	ans += (rem1[4] * rem2[1]);
	ans += (rem1[0] * rem2[0]);
	  
	cout << ans;
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

