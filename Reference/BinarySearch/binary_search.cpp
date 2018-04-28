using namespace std;
#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
#define mem(x,val) memset((x),(val),sizeof(x));
#define rite(x) freopen(x,"w",stdout);
#define read(x) freopen(x,"r",stdin);
#define all(x) x.begin(),x.end()
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define clr clear()
#define inf (1<<30)
#define ins insert
#define xx first
#define yy second
#define eps 1e-9
typedef long long i64;
typedef unsigned long long ui64;
typedef string st;
typedef vector<int> vi;
typedef vector<st> vs;
typedef map<int,int> mii;
typedef map<st,int> msi;
typedef set<int> si;
typedef set<st> ss;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
#define mx 0
int binary_upper(vi &v, int i, int j, int s){
	int mid;
	while(i < j){
		mid = (i+j) /2;
		if(v[mid] < s) i = mid +1;
		else j = mid ;
	}
	//cout << i << " " << j << endl;
	if(i == j){
		return i;
	}

}
int binary_lower(vi &v, int i, int j, int s){
	int mid;
	while(i < j){
		mid = (i+j) / 2;
		if(v[mid] >= s) j = mid;
		else i = mid+1 ;
	}
	//cout << i << " " << j << endl;
	if(i == j){
		return i;
	}

}
int main() {
   	ios_base::sync_with_stdio(0);cin.tie(NULL);
   	//Solution
   	int n, s;
   	cin >> n >> s;
   	vi a;
   	for (int i = 0; i < n; ++i)
   	{
   		int ai;
   		cin >> ai;
   		a.pb(ai);
   	}

   	cout << binary_upper(a, 0, n-1, s) << endl;
   	cout << binary_lower(a, 0, n-1, s) << endl;
	
   	
   	
   	return 0;
}


//g++-4.9 binary_search.cpp -o binary_search && ./binary_search < binary_search.in > binary_search.out






