using namespace std;
#include <bits/stdc++.h>
#define rep(i,n) for(auto i=0; i<(n); i++)
#define repd(i,n) for(auto i=(n)-1; i>=0; i--)
#define repf(i,a,b) for(auto i=(a); i<=(b); i++)
#define repe(i,l) for(auto i: l)
#define mem(x,val) memset((x),(val),sizeof(x));
#define rite(x) freopen(x,"w+",stdout);
#define read(x) freopen(x,"rt",stdin);
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define clr clear()
#define INF ((int)0x3f3f3f3f)
#define ins insert
#define xx first
#define yy second
#define eps 1e-9
#define endl '\n'
#define _ ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.precision(10);cout<<fixed;
template<class T> T abs(T x) { return x > 0 ? x : -x; }
template<class T> T mini(T x, T y) { return x <  y? x : y; }
template<class T> T maxi(T x, T y) { return x <  y? y : x; }
template<class T> T gcd(T a, T b) { return a%b? gcd(b, a%b) : b; }
typedef long long i64;
typedef unsigned long long ui64;
typedef string st;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<st> vs;
typedef map<int,int> mii;
typedef map<st,int> msi;
typedef set<int> si;
typedef set<st> ss;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
typedef long long ll;
typedef unsigned long long ull;

#define MOD (1e9 + 7)
#define MAX 1000007


int V, a, b; // Vertex, size of set A and B

vii Adj;
vi vis, match;
int Aug(int l){
	if(vis[l]) return 0;
	vis[l] = 1;
	rep(j, sz(Adj[l])){
		int r = Adj[l][j];
		if(match[r] == -1 || Aug(match[r])){
			match[r] = l;
			return 1;
		}
	}
	return 0;
}

int MCBM(){
	int ans = 0;
	match.assign(V, -1);
	rep(i, a){
		vis.assign(a,0);
		ans += Aug(i);
	}
	return ans;
}

int main() {_
	//Solution
	#ifdef LOCAL
		// read("MCBM.in");
		// rite("MCBM.out");
	#endif
	
	
	
	
	
	
	
	#ifdef LOCAL
		//cout << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << endl;
	#endif
   	
	return 0;
}


/*

	g++-4.9 -std=c++11 MCBM.cpp -o MCBM -DLOCAL && ./MCBM


*/




