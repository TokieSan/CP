#include <bits/stdc++.h>

using namespace std;

typedef double ll;
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
	
	double m,n; cin >> m >> n;
	/*
	 *
	  1 2
	1 1 2
	2 2 2	
	 *
	 */
	double ans=0;
	// sum 1->R (R*P(R))
	//
	// P(R) = (i/m)^n - (i-1/m)^n
	for(double i=1; i<=m; i++){
		ans+=i*(pow(i/m,n)-(pow((i-1)/m,n)));
	}
	cout << setprecision(12) <<ans;

	return 0;
}
