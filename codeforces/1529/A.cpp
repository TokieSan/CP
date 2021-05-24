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
#define tt(n) for (int i=0; i<n; i++)
#define rtt(n) for (int i=n-1; i>=0; ++i)
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
T gcd(T a, T b) {
    if(a%b)
        return gcd(b, a % b);
    return b;
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

template <typename T>

void swap(T &a, T &b){
    T tmp = a;
    a = b;
    b = tmp;
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

void checkMyNeighbors(int **a, int i, int j, int N) {
    int pt[] = {-1,0,1};
    int ptt[] = {-1,0,1};
    //validState
    if(!validLimits(i,j,N,N)) return;
    //manipulator
    // a[i][j]='x';
    
    //remember to add your shit's limits
    FOR(k,0,3) {
        FOR(kk,0,3) {
            checkMyNeighbors(a,i+pt[k],j+ptt[kk],N);
        }
    }
}
void solve() {
    G(n);
    V<double> a(n,0.);
    tt(n) cin >> a[i];

    sort(a.begin(), a.end());

    int tmp = 0;
    while(true){
        if(a.empty()) break;
        if(tmp>n) break;
       
        double avg = accumulate(all(a), 0.0) / a.size();
        
        while(a.back()>avg) a.pop_back();
        tmp++;
    }  
    cout << n - a.size() << '\n'; 
}

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);	
    //freopen(".in", "r", stdin);
    //freopen(".out", "w", stdout);
    int t = -1;
    if(t==-1) cin >> t;
    tt(t) {
        //cout << "Case " << i+1 << ": " << solve();
        solve();
    }
    return 0;
}

