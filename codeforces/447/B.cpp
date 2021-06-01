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

template<typename KeyType, typename ValueType> 
std::pair<KeyType,ValueType> get_max( const std::map<KeyType,ValueType>& x ) {
  using pairtype=std::pair<KeyType,ValueType>; 
  return *std::max_element(x.begin(), x.end(), [] (const pairtype & p1, const pairtype & p2) {
        return p1.second < p2.second;
  }); 
}

int main(int argc, char *argv[]) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);	
	//freopen(".in", "r", stdin);
	map<char,int>M;
	string s; cin >> s;
	int k; cin >> k;
	tt(26){
	    int t; cin >> t;
	    M[char('a'+i)]=t;
	}
	auto x = get_max(M);
	char t =(x.first);
	int ans=0;
	tt(k){
	    s.push_back(char(t));
	}
	tt(s.length()){
	    ans+=(i+1)*M[s[i]];
	}
	cout << ans;
	return 0;
}
