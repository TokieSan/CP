#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

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
	int s[4];
	set<int, greater<int> > n;
	cin >> s[0] >> s[1] >> s[2] >> s[3];
	FOR(i,0,4){
		n.insert(s[i]);
	}
	cout <<4-n.size();
	return 0;
}

