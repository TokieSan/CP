#include <bits/stdc++.h>

using namespace std;

#define tt(n) for (int i=0; i<n; i++)
#define FOR(i,a,n) for (auto i=a; i!=n; i++)


int main(int argc, char *argv[]) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);	
	string s; cin >> s;
	tt((int)s.length()) {
		s[i]-='a';
	}
	int count= s[0]<13?s[0]:(26-s[0]) ;

	FOR(i,1,(int)s.length()){
		count+=(min(abs(s[i]-s[i-1]), 26-abs(s[i]-s[i-1])));
	}
	cout << count;
	return 0;
}

