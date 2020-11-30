#include <bits/stdc++.h>

using namespace std;

#define tt(n) for (int i=0; i<n; i++)


int main(int argc, char *argv[]) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);	
	//freopen(".in", "r", stdin);
	int n; cin >> n;
	
	int l[n];
	for(int i=0; i<n; i++) {
		string str;
		cin >> str;
		if(str[0]=='1')
			l[i]=0;
		else
			l[i]=1;
	}
	int ctr=1;
	for(int i=1; i<n; i++) {
		if(l[i]!=l[i-1])
			ctr++;
	}
	cout << ctr;

	return 0;
}

