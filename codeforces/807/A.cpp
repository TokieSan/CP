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
#define endl '\n';

int main(int argc, char *argv[]) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);	
	//freopen(".in", "r", stdin);
	int n; cin >> n;
	int tmp[n][2];
	tt(n) {
		cin >> tmp[i][0] >> tmp[i][1];
	}
	bool ch = true;
	if(tmp[0][0]!=tmp[0][1]) {
		cout << "rated";
		return 0;
	}
	FOR(i,1,n) {
		if(tmp[i][0]!=tmp[i][1]) {
			cout << "rated";
			break;
		}
		if(tmp[i-1][1]<tmp[i][1])
			ch=false;
		if(i==n-1) {
			ch?cout<<"maybe":cout<<"unrated";	
		}
	}

	return 0;
}

