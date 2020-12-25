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
	string s ="qwertyuiopasdfghjkl;zxcvbnm,./";
	string str; char c; cin >> c >> str;
	int l;
	c=='R'?l=-1:l=1;
	tt(str.length()){
		for(int j = 0; j<30; j++){
			if(str[i]==s[j]) {
				cout << s[j+l];
			}
		}
	}
	
	return 0;
}

