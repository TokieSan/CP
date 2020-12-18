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
	int n; scanf("%d",&n); int arr[n+1];
	tt(n) {
		scanf("%d",&arr[i+1]);
	}
	FOR(i,1,n+1) {
		FOR(j,1,n+1) {
			if(i==arr[j]) {printf("%d ", j); break;}
		}
	}
	
	return 0;
}

