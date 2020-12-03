#include <bits/stdc++.h>

using namespace std;


int main(int argc, char *argv[]) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);	
	int N; cin >> N;
	int x=0,ctr=0;
	for(int i=0; i<N; i++) {
		int tmp; cin >> tmp;
		x+=tmp;
		if(x<0) {
			ctr++;
			x+=1;
    	}
	}
	cout << ctr;
	
	return 0;
}

