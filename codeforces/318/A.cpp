#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef pair<int, int> pi;

#define PB push_back
#define MP make_pair
#define F first
#define S second
#define tt(n) for (int i=0; i<n; i++)
#define FOR(i,a,n) for (auto i=a; i!=n; i++)


int main(int argc, char *argv[]) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);	
	//freopen(".in", "r", stdin);
	ll n,k;
	cin >> n >> k;
	int c=0; if (n%2!=0) c = 1;
	if(k-c<=n/2) {
		cout << 1+(2*(k-1));
	} else if(k>n/2) {
		cout << 2+(k-(n/2+(n%2))-1)*2;
	} else {
		cout << 2;
	}
	
	return 0;
}

