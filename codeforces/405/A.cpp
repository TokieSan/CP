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

	int N; cin >> N;
	int mat[N];
	tt(N) {
		cin >> mat[i];
	}
	
	sort(mat, mat+N);
	tt(N)
		cout << mat[i] << " ";
	
	//if you saw my previous answers you'll realize how overcomplicated dumb I am :V
	return 0;
}

