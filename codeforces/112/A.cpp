#include <bits/stdc++.h>

using namespace std;

#define tt(n) for (int i=0; i<n; i++)


int main(int argc, char *argv[]) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string str1,str2;
	cin >> str1 >> str2;
	tt((int)str1.length())
		str1[i]=tolower(str1[i]);
	tt((int)str2.length())
		str2[i]=tolower(str2[i]);

	if(str1<str2)
		cout << -1;
	else if(str1==str2)
		cout << 0;
	else
		cout << 1;

	return 0;
}

