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
	int sn; cin >> sn;
	string str;
	tt(sn) {
		cin >> str;
		if(str.length()<=10) cout << str << '\n';
		else {
			int n=str.length();
			cout << str[0] << n-2 << str[n-1] << '\n';
		}
	}
	
	return 0;
}

