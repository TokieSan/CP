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

V<vi> adj; 
V<bool> vis, vis2;
V<int> deg;
vi path, ans;
void dfs(int s, int dg){
    if(vis[s]) return;
    vis[s]=1;
    deg[s]=dg;
    tt(adj[s].size()){
        dfs(adj[s][i], dg+1);
    }
}
void bfs(int s){
    queue<int> q;
    q.push(s);
    vis2[s]=1;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        vis2[v]=1;
        ans.pb(v);
        tt(adj[v].size()){
            if(!vis2[adj[v][i]]){
                q.push(adj[v][i]);
                vis2[adj[v][i]]=1;
            }
        }
    }
}
bool ss(int a, int b){
    return path[a]<path[b];
}
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);	
    //freopen(".in", "r", stdin);
    //freopen(".out", "w", stdout);
    G(n);
    //vis.resize(n,0);
    adj.resize(n);
    vis2.resize(n,0);
//deg.resize(n,-1);
    tt(n-1){
        GG(a,b);
        a--; b--;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    path.resize(n);
    
    //dfs(0, 0);
    //bfs(0);
    vi tmp;
    tmp.resize(n);
    tt(n){
        G(t);
        t--;
        tmp[i]=t;
        //path[i]=deg[t];
        path[t]=i;
        
    }
    
    tt(n){
        sort(adj[i].begin(), adj[i].end(), ss);
    }
    bfs(0);
    tt(n){
        if(tmp[i]!=ans[i]){
            cout << "No";
            return 0;
        }
    }
    /*
    if(find(all(vis2), 0)!=vis2.end()){
        cout << "No";
        return 0;
    }
    tt(n-1){
        if(path[i]>path[i+1]){
            cout << "No";
            return 0;
        }
    }
        */

    cout << "Yes";
    

    return 0;
}
