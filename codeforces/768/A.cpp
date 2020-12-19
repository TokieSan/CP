#include <bits/stdc++.h>

using namespace std;

#define tt(n) for (int i=0; i<n; i++)
#define FOR(i,a,n) for (auto i=a; i!=n; i++)

int main(int argc, char *argv[]) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);	
	int n; scanf("%d", &n);
	if(n<=2) {
		cout << 0;
		return 0;
	}
	long int x[n];
	tt(n) {
		scanf("%ld", &x[i]);
	}
	sort(x, x+n);
	if(x[0]!=x[1] && x[n-1]!=x[n-2])
		printf("%d", (n-2));
	else {
		int ctr=2;
		tt(n) {
			if(x[i]!=x[i+1])
				break;
			ctr++;
		}
		for(int i=n-1; i>=0; i--) {
			if(x[i]!=x[i-1])
				break;
			ctr++;
		}
		n-ctr<0?printf("0"):printf("%d", n-ctr);
	}

	return 0;
}

