#include <bits/stdc++.h>

using namespace std;

#define tt(n) for (int i=0; i<n; i++)
#define FOR(i,a,n) for (auto i=a; i!=n; i++)


int main(int argc, char *argv[]) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);	
	int a[4];
	tt(4) cin >> a[i];
	string s; cin >> s;
	int cal = 0;
	for(int i=0; i<s.length(); i++) {
		cal+=a[(int)s[i]-'0'-1];
	}
	cout << cal;	
	return 0;
}

