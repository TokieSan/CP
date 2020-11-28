#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a, b;
	cin >> a >> b;
	for(int y=0; true; y++) {
		if(a>b) {
			cout << y;
			break;
		}
		a*=3;
		b*=2;
	}
	return 0;
}

