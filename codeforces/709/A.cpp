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
	int max,n,d;
	cin >> n >> max >> d;
	int ctr=0, sum=0;
	while(n--){
		int tmp; cin >> tmp;
		if(tmp<=max) sum+=tmp;
		if(sum>d) {
			ctr++;
			sum=0;
		}

	}
	cout << ctr;
	return 0;
}

