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
	if(n<2) {
		cout << n;
		return 0;
	}
	int num[n];
	int all=0;
	tt(n) {
		cin >> num[i];
		all+=num[i];
	}
	all/=2;
	int tmp=0;
	sort(num, num+n);
	FOR(i,0,n) {
		tmp+=num[n-i-1];
		if(tmp>all) {
			cout << i+1;
			break;
		}
	}
	
	return 0;
}

