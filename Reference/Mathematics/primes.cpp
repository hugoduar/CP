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


typedef vector<ll> vll;

ll _sieve_size;
bitset<10000010> bs;
vector<ll> primes;

void sieve(ll upperbound = 10000007){
	_sieve_size = upperbound + 1;
	bs.set();
	bs[0] = bs[1] = 0;
	for(ll i = 2; i < _sieve_size; i++){
		if(bs[i]){
			for(ll j = i*i; j < _sieve_size; j+=i){
				bs[j] = 0;
			}
			primes.push_back(i);
		}
	}
}

bool isPrime(ll N){ return bs[N];}

vll primeFactors(ll N){
	vll ans;
	ll PF;
	int PF_idx = 0;
	PF = primes[PF_idx];
	while(PF * PF <= N){
		while(N%PF == 0){
			N /= PF;
			ans.push_back(PF);
		}
		PF = primes[++PF_idx];
	}
	if(N!=1) ans.push_back(N);
	return ans;

}

int main() {_
	//Solution
	#ifdef LOCAL
		// read("primes.in");
		// rite("primes.out");
	#endif

		sieve(10000007);


	
	
	
	
	
	
	
	
	
	
	
	#ifdef LOCAL
		//cout << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << endl;
	#endif
   	
	return 0;
}


//g++-4.9 -std=c++11 primes.cpp -o primes -DLOCAL && ./primes




