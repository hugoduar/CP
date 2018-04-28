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
#define INF (1<<30)
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





#define DFS_WHITE -1 // normal DFS, do not change this with other values (other than 0), because we usually use memset with conjunction with DFS_WHITE
#define DFS_BLACK 1

vector<vpii> AdjList;
int V, E;

vi dfs_num;     // this variable has to be global, we cannot put it in recursion
vi dfs_low;       // additional information for articulation points/bridges/SCCs
vi dfs_parent;      // to differentiate real back edge versus bidirectional edge
vpii bridges;
vi articulation_vertex;
int dfsNumberCounter, dfsRoot, rootChildren;

void articulationPointAndBridge(int u) {
  dfs_low[u] = dfs_num[u] = dfsNumberCounter++;      // dfs_low[u] <= dfs_num[u]
  for (int j = 0; j < (int)AdjList[u].size(); j++) {
    pii v = AdjList[u][j];
    if (dfs_num[v.first] == DFS_WHITE) {                          // a tree edge
      dfs_parent[v.first] = u;
      if (u == dfsRoot) rootChildren++;  // special case, count children of root

      articulationPointAndBridge(v.first);

      if (dfs_low[v.first] >= dfs_num[u])              // for articulation point
        articulation_vertex[u] = true;           // store this information first
      if (dfs_low[v.first] > dfs_num[u])
      	bridges.push_back(pii(u, v.first));                        // for bridge
        // printf(" Edge (%d, %d) is a bridge\n", u, v.first);
      dfs_low[u] = min(dfs_low[u], dfs_low[v.first]);       // update dfs_low[u]
    }
    else if (v.first != dfs_parent[u])       // a back edge and not direct cycle
      dfs_low[u] = min(dfs_low[u], dfs_num[v.first]);       // update dfs_low[u]
} }

void articulation_points(){
	bridges.clear();
  dfsNumberCounter = 0; dfs_num.assign(V, DFS_WHITE); dfs_low.assign(V, 0);
  dfs_parent.assign(V, -1); articulation_vertex.assign(V, 0);
  // printf("Bridges:\n");
  for (int i = 0; i < V; i++)
    if (dfs_num[i] == DFS_WHITE) {
      dfsRoot = i; rootChildren = 0;
      articulationPointAndBridge(i);
      articulation_vertex[dfsRoot] = (rootChildren > 1); }       // special case
  // printf("Articulation Points:\n");
  // for (int i = 0; i < V; i++)
  //   if (articulation_vertex[i])
  //     printf(" Vertex %d\n", i);
}




int main() {_
	//Solution
	#ifdef LOCAL
		// read("articulation_points.in");
		// rite("articulation_points.out");
	#endif
	
	
	
	
	
	
	
	
	
	
	
	#ifdef LOCAL
		//cout << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << endl;
	#endif
   	
	return 0;
}


//g++-4.9 -std=c++11 articulation_points.cpp -o articulation_points -DLOCAL && ./articulation_points




