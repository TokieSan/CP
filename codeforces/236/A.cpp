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
	string str;
	cin >> str;
	
	set<char, greater<char> > s1;
	
	tt((int)str.length())
		s1.insert(str[i]);
	
	if(s1.size()%2>0) {
		cout <<"IGNORE HIM!";
	} else {
		cout << "CHAT WITH HER!";
	}

	/* 	 took a weird different approac	 */
	
	return 0;
}

