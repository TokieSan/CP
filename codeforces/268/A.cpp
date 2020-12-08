#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,n) for (auto i=a; i!=n; i++)


int main(int argc, char *argv[]) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);	
	int n; cin >> n;
	int N[n][2];
	FOR(i,0,n) {
		cin >> N[i][0]>> N[i][1];	
	}
	int ctr=0;
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			if(N[i][0]==N[j][1] && i!=j) {
				ctr++;
			}
		}
	}
	cout << ctr;
	return 0;
}

