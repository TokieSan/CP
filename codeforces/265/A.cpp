#include <bits/stdc++.h>

using namespace std;


#define tt(n) for (int i=0; i<n; i++)
#define FOR(i,a,n) for (auto i=a; i!=n; i++)

int main(int argc, char *argv[]) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);	
	string s,t; cin >> s >> t;
	int ctr=0;

	tt((int)t.length()){
		if(t[i]==s[ctr]){
			ctr++;
		}
	}
	cout << ++ctr;
	return 0;
}

