#include <bits/stdc++.h>

using namespace std;

#define PB push_back

#define tt(n) for (int i=0; i<n; i++)
#define FOR(i,a,n) for (auto i=a; i!=n; i++)


int main(int argc, char *argv[]) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);	
	vector<char> someChars;
	int n; cin>>n;
	tt(n) {
		char tmp; cin >> tmp; someChars.PB(tmp);
	}
	int ctr=0;
	for(int i=1; i<someChars.size(); i++){
		if(someChars[i]==someChars[i-1]) {
			ctr++;	
		}
	}
	cout << ctr;
	
	return 0;
}

