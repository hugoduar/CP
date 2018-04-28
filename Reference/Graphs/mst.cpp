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

class UnionFind {    //Funciona indexando desde 1..N                                         
private:
  vi p, rank, setSize;                       // remember: vi is vector<int>
  int numSets;
public:
  UnionFind(int N) {

    setSize.assign(N, 1); 
    numSets = N; 
    rank.assign(N, 0);
    p.assign(N, 0); 
    for (int i = 0; i < N; i++) 
    	p[i] = i; 
	}
  int findSet(int i) { 
  	return (p[i] == i) ? i : (p[i] = findSet(p[i])); 
  }
  bool isSameSet(int i, int j) { 
  	return findSet(i) == findSet(j); 
  }
  void unionSet(int i, int j) { 
    if (!isSameSet(i, j)) { 
    	numSets--; 
    	int x = findSet(i), y = findSet(j);
    	// rank is used to keep the tree short
    	if (rank[x] > rank[y]) { 
    		p[y] = x; 
    		setSize[x] += setSize[y]; 
    	}
    	else{ 
    		p[x] = y; 
    		setSize[y] += setSize[x];
            if (rank[x] == rank[y]) 
            	rank[y]++;
        } 
    }
  }
  int numDisjointSets() { 
  	return numSets; 
  }
  int sizeOfSet(int i) { 
  	return setSize[findSet(i)]; 
  }
};

ll kruskal(vector<pair<int, pii>> Edgs, int N, bool maxmin = true){
	if(maxmin) sort(all(Edgs));
	else  sort(rall(Edgs));

	ll cost = 0;
	UnionFind uf(N+5);
	repe(edg, Edgs){
		int u = edg.yy.xx, v = edg.yy.yy;
		if(!uf.isSameSet(u, v)){
			cost += edg.xx;
		}
		uf.unionSet(u, v);
	}
	return cost;

}
int main() {_
	//Solution
	#ifdef LOCAL
		read("mst.in");
		rite("mst.out");
	#endif
	
	
	
	
	
	
	
	
	
	
	
	#ifdef LOCAL
		//cout << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << endl;
	#endif
   	
	return 0;
}


//g++-4.9 -std=c++11 mst.cpp -o mst -DLOCAL && ./mst




