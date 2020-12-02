#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,n) for (auto i=a; i!=n; i++)
	
int main(int argc, char *argv[]) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);	

	int n; cin >> n;
	int *vect = new int[n];
	FOR(i,0,n) 
		cin >> vect[i];

	int score1=0, score2=0;
	bool ch=true;
	int left=0, right=n-1;
	
	while(right>=left) {
		if(vect[right]<vect[left]) {
			ch?	score1+=vect[left] : score2+=vect[left];
			left++;
		} else {
			ch? score1+=vect[right] : score2+=vect[right];	
			right--;
		}
		ch=ch?false:true;
	}
	cout << score1 << " " << score2;
	
	return 0;
}

