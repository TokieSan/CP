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
#define rtt(n) for (auto i=n-1; i>=0; ++i)
#define FOR(i,a,n) for (auto i=a; i!=n; i++)
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
const int LOG=19;
const int MAX=3e5+1;
int up[MAX][LOG];
pair<ll,ll> w[MAX]; // first is weight, second is cost
int parent[MAX];
pair<ll,ll> ans(int v, ll W){
    pair<ll,ll> an = {0,0};//first is weight second is cost
    
    ll t=0;
    while(W){
        int u = v;
        for(int i=LOG-1; i>=0; i--){
            if(w[up[u][i]].F){
                u=up[u][i];
            }
        }
        ll tmp = min(W,w[u].F);
        w[u].F-=tmp;
        W-=tmp;
        an.S+=tmp*w[u].S;
        an.F+=tmp;
        if(w[v].F==0) break;
    }
    return an;
}
void add(int i){
    for(int j=1; j<LOG; j++){
        up[i][j]=up[up[i][j-1]][j-1];
    }
}
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);	
    //freopen(".in", "r", stdin);
    //freopen(".out", "w", stdout);
    G(q);
    int n = (2*q);
    
    GG(a0,c0);
    parent[0]=0;
    w[0]={a0,c0};
    add(0);
    FOR(i,1,q+1){
        G(t);
        if(t==1){
            GGG(p,a,c);
            parent[i] = p;
            up[i][0]=p;
            w[i] = {a,c};
            add(i);
        } else {
            GG(v,w);
            pair<ll,ll> a = ans(v,w); // return weight and cost;
 
            cout << a.F << ' ' << a.S << endl;
        }
    }
    return 0;
}
