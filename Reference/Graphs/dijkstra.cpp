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
const int INF  = 0x3f3f3f3f;
#define ins insert
#define xx first
#define yy second
#define eps 1e-9
#define endl '\n'
#define _ ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.precision(10);cout<<fixed;
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

vector<vpii> AdjList;
int V, E;
vi dijkstra(int s){
	 // Dijkstra routine
	  vi dist(V, INF); dist[s] = 0;                    // INF = 1B to avoid overflow
	  priority_queue< pii, vector<pii>, greater<pii> > pq; pq.push(pii(0, s));
	                             // ^to sort the pairs by increasing distance from s
	  while (!pq.empty()) {                                             // main loop
	    pii front = pq.top(); pq.pop();     // greedy: pick shortest unvisited vertex
	    int d = front.first, u = front.second;
	    if (d > dist[u]) continue;   // this check is important, see the explanation
	    for (int j = 0; j < (int)AdjList[u].size(); j++) {
	      pii v = AdjList[u][j];                       // all outgoing edges from u
	      if (dist[u] + v.second < dist[v.first]) {
	        dist[v.first] = dist[u] + v.second;                 // relax operation
	        pq.push(pii(dist[v.first], v.first));
	  } } }  // note: this variant can cause duplicate items in the priority queue
	  return dist;
}
int main() {_
	//Solution
	#ifdef LOCAL
		read("dijkstra.in");
		rite("dijkstra.out");
	#endif
	
	
	
	
	
	
	
	
	
	
	
	#ifdef LOCAL
		//cout << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << endl;
	#endif
   	
	return 0;
}


//g++-4.9 -std=c++11 dijkstra.cpp -o dijkstra -DLOCAL && ./dijkstra




