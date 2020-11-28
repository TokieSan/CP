#include <bits/stdc++.h>

using namespace std;


#define tt(n) for (int i=0; i<n; i++)
#define FOR(i,a,n) for (auto i=a; i!=n; i++)


int main(int argc, char *argv[]) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int N, H;
	cin >> N >> H;
	int h[N];
	tt(N)
		cin >> h[i];
	int width=0;
	FOR(i, 0, N) {
		if(h[i]>H)
			width+=2;
		else
			width+=1;
	}
	cout << width;
	/* freopen("in", "r", stdin);
	 * freopen("out", "w", stdout);
	 */
	
	return 0;
}

