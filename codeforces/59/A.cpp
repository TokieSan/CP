#include <bits/stdc++.h>

using namespace std;
#define tt(n) for (int i=0; i<n; i++)

int main(int argc, char *argv[]) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string str; cin >> str;
	int N=0;
	int len = str.length();
	for(int i=0; i<len; ++i) {
		if(str[i]>='A' && str[i]<='Z')
			N++;
	}

	if( N > len/2 ) {
		tt(len) {
			cout << (char)toupper(str[i]);
		}
	} else {
		tt(len) {
			cout << (char)tolower(str[i]);
		}
	}
	return 0;
}

