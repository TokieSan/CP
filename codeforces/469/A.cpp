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
#define endl '\n'

int main(int argc, char *argv[]) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);	
	//freopen(".in", "r", stdin);
	int n; cin >> n;
	int p; cin >> p;
	set<int> si;
	tt(p) {
		int tmp; cin >> tmp;
		si.insert(tmp);
	}
	int q; cin >> q;
	tt(q) {
		int tmp; cin >> tmp;
		si.insert(tmp);
	}
	(int)si.size()==n?cout<<"I become the guy.":cout<<"Oh, my keyboard!";
	
	return 0;
}

