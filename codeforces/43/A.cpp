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
#define endl '\n';
vector<string> ve;
vector<int> v2;
int fun(string s) {
	int ctr=0;
	FOR(i,ve.begin(),ve.end()) {
		if(*i==s) return ctr;
		ctr++;
	}
	return -1;
}
int main(int argc, char *argv[]) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);	
	//freopen(".in", "r", stdin);
	int n; cin >> n;

	int ind = -1;
	tt(n) {
		string str; cin >> str;
		int x = fun(str);
		if(x!=-1) {
			v2[x]++;
		} else {
			ve.PB(str);
			v2.PB(1);
		}
		int mn = -1;

		FOR(j,v2.begin(),v2.end()) {
			mn = max(mn, *j);
			if(mn==*j) ind=j-v2.begin();
		}

		
	}
	
	cout << ve[ind];
	
	return 0;
}

