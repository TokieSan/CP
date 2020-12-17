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
	int n; cin >> n;
	vi t1, t2, t3;
	for(int i=0; i<n; i++) {
		int tmp; cin >> tmp;
		if(tmp==1) t1.PB(i+1);
		else if(tmp==2) t2.PB(1+i);
		else t3.PB(i+1);
	}
	int sum = min(t1.size(), min(t2.size(), t3.size()));
	cout << sum << '\n';
	
	tt(sum) {
		cout << t1[i] << ' ' << t2[i] << ' ' << t3[i] << '\n';
	}

	
	return 0;
}

