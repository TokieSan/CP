#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef pair<int, int> pi;
typedef priority_queue<int> pq;
typedef priority_queue<int,vector<int>,greater<int> > pqr;

#define pb push_back
#define V vector
#define mp make_pair
#define F first
#define S second
#define tt(n) for (auto i=0; i<n; i++)
#define rtt(n) for (auto i=n-1; i>=0; i--)
#define FOR(i,a,n) for (auto i=a; i!=n; i++)
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define _mem(a,n) memset(a,n,sz(a))
#define G(x) int x; cin >> x;
#define GG(x,y) int x,y; cin >> x >> y;
#define GGG(x,y,z) int x,y,z; cin >> x >> y >> z;
#define tt2(nx,ny) \
    for(int i=0; i<nx; i++) \
        for(int j=0; j<ny; j++)	

#define    PI         3.14159265358979
#define    AREA(r)    (PI*(r)*(r))
#define	   MODULUS	  1000000007

template <typename T> 

T **twoD(T l, int x, int y) {
    T **TWODSET = new T*[x];
    tt(x) {
        TWODSET[i] = new T[y];
    }
    return TWODSET;
}

int getMinIdx(vi &a){
    int mindx=-1, mn=1e9;
    int i=-1;
    for(i=0; i<sz(a); i++){
        mn=min(mn, a[i]);
        if(mn==a[i])
            mindx=i;
    }
    return mindx;
}

template <typename T>
T power(int a, int b){
    T result=1;
    while(b){
        if(b%2) result*=a;
        a*=a;
        b/=2;
    }		
    return result;
}

template <typename T>
//Euler Divide
T div(T &a, T &b, T &P){
    return a*power(b, P-2)%P;
}

template <class T> 
bool sortbysec(const pair<T,T> &a, const pair<T,T> &b){
    // for pair sorting by second
    return (a.second < b.second);
}

template <class T>
bool sortbysec(const int& a, const int& b){
    // for priority_queue sort by first
    return a>b;
}
int getMaxIdx(vi &a){
    int maxdx=-1, mn=-1e9;
    int i=-1;
    for(i=0; i<sz(a); i++){
        mn=max(mn, a[i]);
        if(mn==a[i])
            maxdx=i;
    }
    return maxdx;
}

bool isFraction(double &a){
    if(a==static_cast<int>(a))	return true;
    else return false;
}
bool validLimits(int x, int y, int nx, int ny) {
    if(
            x<0 ||
            x>=nx ||
            y<0 ||
            y>=nx 
        ) return false;
    return true;
    
}
struct node{
    node *l, *r;
    int key;
    node *p;
};

//parent is i + log2(i+1)
string s;
int k; 
V<ll> ad;

void formtree(int p){
    rtt((1<<k)){
        int x = i+i;
		if(s[i-1]=='0') ad[i]=ad[x+1];
		else if(s[i-1]=='1') ad[i]=ad[x];
		else ad[i]=ad[x]+ad[x+1];
	}
}
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);	
    //freopen(".in", "r", stdin);
    //freopen(".out", "w", stdout);

 cin >> k >> s;
    int n =(s.length());
    reverse(all(s));
    ad.resize((1<<(k+1))+2,1);
	
	formtree(0);

    G(q);
    while(q--){
        G(p);
        char c; cin >> c;
        p=(1<<k)-p;
        s[p-1]=c;
        
        while(p>0){
            int x = p+p;
            if(s[p-1]=='0') ad[p]=ad[x+1];
            else if(s[p-1]=='1') ad[p]=ad[x];
            else ad[p]=ad[x]+ad[x+1];
            p/=2;        
        }
        printf("%lld\n", ad[1]);
    }

    return 0;
}
