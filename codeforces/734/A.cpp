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
	int n;
	cin >> n;
	
	string str;
	cin >> str;
	int ctr=0;
	FOR(i,0,n) {
		if(str[i]=='A')
			ctr++;
		else
			ctr--;
	}
	
	if(ctr>0)
		cout << "Anton";
	else if(ctr<0)
		cout<<"Danik";
	else
		cout << "Friendship";


	
	return 0;
}

